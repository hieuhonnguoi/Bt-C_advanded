#ifndef SENSORS_H
#define SENSORS_H

#include "types.h"

void sensors_init(void);
sensors_data_t sensors_read_data(void);

#endif