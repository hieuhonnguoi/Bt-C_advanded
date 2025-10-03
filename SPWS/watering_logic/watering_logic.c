#include <stdio.h>
#include <time.h>
#include "watering_logic.h"
#include "sensors.h"
#include "actuators.h"
#include "buttons.h"

static system_config_t *sys_cfg;
static time_t watering_start_time;

void watering_init(system_config_t *config){
    sys_cfg = config;
    sys_cfg->mode = MODE_AUTO;
    turn_pump_off();
    led_set_state(LED_NORMAL);
    printf("[Watering] Set\n");
}

void watering_update(void){
    
    buttons_poll(sys_cfg);

    static time_t last_sensor_read = 0;
    time_t now = time(NULL);

    if (difftime(now, last_sensor_read) >= sensors_interval) {
        sensor_data_t data = sensors_read_data();
        printf("[SENSOR] Moisture=%d%%, Temp=%.1fC\n",data.soil.value, data.temp_value);
        last_sensor_read = now;
    }

    //Auto mode
    if(sys_cfg->mode == MODE_AUTO){
        if(get_pump_state() == PUMP_OFF){//if pump is off
            //if soil_value < soil_min -> turn on pump
            if(data.soil_value < sys_cfg->soil_min){
                turn_pump_on();
                watering_start_time = time(NULL);
                led_set_state(LED_WATERING);
                printf("[LOGIC] -> AUTO: Moisture %d%% < %d%% → Pump ON.\n",data.soil_value, sys_cfg->soil_min);
            } else {
                led_set_state(LED_NORMAL);
            }
        }else { //if pump is on
            time_t now = time(NULL);
            double elapsed = difftime(now, watering_start_time); 
            
            if(data.soil_value > sys_cfg->soil_max || elapsed > sys_cfg->watering_time){ 
                turn_pump_off();
                led_set_state(LED_NORMAL);
                printf("[Logic] AUTO: Pump OFF (moisture=%d%%, elapsed=%.0fs).\n",data.soil_value, elapsed);
            }else {
                led_set_state(LED_WATERING);
            }
        }
    }
    //Manual mode
    else if(sys_cfg->mode == MODE_MANUAL){ 
        if(get_pump_state() == PUMP_OFF){
            led_set_state(LED_NORMAL);
        }else{
            led_set_state(LED_WATERING);
        }
    }
}
