#include "actuators.h"
#include <stdio.h>

#include "types.h"

static pump_state_t current_pump = PUMP_OFF;
static led_state_t current_led = LED_NORMAL;

void turn_pump_on(void){
    if(current_pump != PUMP_ON){
        current_pump = PUMP_ON;
        printf("[PUMP] -> ON\n");
    }
}

void turn_pump_off(void){
    if(current_pump != PUMP_OFF){
        current_pump = PUMP_OFF;
        printf("[PUMP] -> OFF\n");
    }
}

pump_state_t get_pump_state(void){
    return current_pump;
}

void led_set_state(led_state_t state){
    if(current_led != state){
        current_led = state;
        switch (state){
            case LED_NORMAL: printf("[LED] -> NORMAL\n");break;
            case LED_LOW_MOISTURE_ALERT: printf("[LED] -> MOISTURE LOW");break;
            case LED_WATERING: printf("[LED] -> WATERING\n");break;
            case LED_ERROR: printf("[LED] -> ERROR\n");break;
        }
    }
}

led_state_t get_led_state(void){
    return current_led;
}
