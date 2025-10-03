#include <stdio.h>
#include <unistd.h>   // sleep()
#include "config.h"
#include "types.h"
#include "sensors.h"
#include "actuators.h"
#include "buttons.h"
#include "watering_logic.h"

int main(void) {
    printf("=== Smart Plant Watering System (SPWS) ===\n");

    system_config_t cfg = {
        .soil_min = DEFAULT_MIN_MOISTURE,
        .soil_max = DEFAULT_MAX_MOISTURE,
        .watering_time = TIME_WATERING_SECONDS,
        .sensors_interval = TIME_WAIT_WATERING_SENCONDS,
        .mode = MODE_AUTO
    };

    sensors_init();
    buttons_init();
    watering_init();

    printf("[INFO] System initialized.\n");
    printf("[INFO] Press '1' to toggle AUTO/MANUAL, '2' to start/stop pump (MANUAL mode).\n");

    while (1) {
        watering_update();   
        sleep(1);            
    }

    return 0;
}

