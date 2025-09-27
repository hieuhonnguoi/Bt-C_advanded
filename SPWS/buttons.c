#include <stdio.h>
#include <time.h>
#include "buttons.h"
#include "actuators.h"

// Biến quản lý trạng thái tưới thủ công
static time_t manual_start_time;
static int manual_watering_active = 0;

static int get_key(void){
    int c;
    c =  getchar();
    if(c != EOF && c != '\n'){
        return c;
    }
    return 0;
}

void buttons_init(void){
    printf("Press: 1 to switch mode, 2 to PUMP ON/OFF");
}

void buttons_poll(system_config_t *config){
    int key;
    key = get_key;
    if (key == '1'){
        if (config->mode == MODE_AUTO){
            config->mode = MODE_MANUAL;
            turn_pump_off();
            printf("[MODE] -> MANUAL. Turn pump off\n");
        } else {
            if (config->mode == MODE_MANUAL){
                config->mode = MODE_AUTO;
                turn_pump_off();
                printf("[MODE] -> AUTO. Turn pump off\n");
            }
        }
    }
    if(config->mode == MODE_MANUAL){
        if (key == '2' && !manual_watering_active){
            turn_pump_on();
            manual_start_time = time(NULL);
            manual_watering_active = 1;
            printf("[Buttons] Manual watering started.\n");
        }
        if (manual_watering_active){
            time_t now = time(NULL);
            if (difftime(now,manual_start_time) >= 10.0 ){
                turn_pump_off();
                manual_watering_active = 0;
                printf("[Buttons] Manual watering stopped after 10s.\n");
            }
        }
    }
}

