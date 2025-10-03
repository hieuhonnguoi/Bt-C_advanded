#ifndef ACTUATORS_H
#define ACTUATORS_H

#include "types.h"

void turn_pump_on(void);
void turn_pump_off(void);
pump_state_t get_pump_state (void);

void led_set_state(led_state_t state );
led_state_t get_led_state(void);
#endif //ACTUATORS_H