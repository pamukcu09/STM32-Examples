/*
 * sensordriver.h
 */

#ifndef HWDRIVERS_SENSORDRIVER_H_
#define HWDRIVERS_SENSORDRIVER_H_

#include <stdint.h>

typedef enum {
	SENSOR_OK,
	SENSOR_ERROR
}sensor_status_e;

sensor_status_e sensor_test_device( uint8_t chipAdd );


#endif /* HWDRIVERS_SENSORDRIVER_H_ */
