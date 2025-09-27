#ifndef TYPES_H
#define TYPES_H

#include <stdio.h>
#include <stdint.h>

//SYSTEM MODE
typedef enum {
    MODE_AUTO,
    MODE_MANUAL
} system_mode_t;

//PUMP STATE
typedef enum {
    PUMP_ON,
    PUMP_OFF
} pump_state_t;

//LED STATE
typedef enum{
    LED_NORMAL,
    LED_WATERING,
    LED_LOW_MOISTURE_ALERT,
    LED_ERROR
} led_state_t;

//DATA SENSOR
typedef struct{
    int soil_value;
    int temp_value;
} sensors_data_t;

//SYSTEM CONFIG
typedef struct{
    uint8_t soil_min;
    uint8_t soil_max;
    uint8_t sensors_interval;
    uint8_t watering_time;
    system_mode_t mode;
} system_config_t;

#endif
