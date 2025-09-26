#ifndef ACTUATORS_H
#define ACTUATORS_H

#include "types.h"

void actuators_init(void);
void turn_pump_on(void);
void turn_pump_off(void);
void set_led_state(led_state_t s);

led_state_t get_led_state(void);
pump_state_t get_pump_state(void);

#endif //ACTUATORS_H