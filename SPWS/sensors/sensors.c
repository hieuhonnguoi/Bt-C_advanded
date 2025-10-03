#include "sensors.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "types.h"

void sensors_init(void){
    srand(time(NULL));
    printf("[Sensors] -> Reading\n");
}

sensors_data_t sensors_data_read(void){

    static int min_temp_sim = 20;
    static int max_temp_sim = 30;

    static int min_soil_sim = 40;
    static int max_soil_sim = 60;

    sensors_data_t data;
    data.temp_value = rand()%(max_temp_sim - min_temp_sim +1) + min_temp_sim;
    data.soil_value = rand()%(max_soil_sim - min_soil_sim +1) + min_soil_sim;

    printf("[Sensors] Temp: %d, Soil: %d\n",data.temp_value,data.soil_value);
    return data;
}


