/*
  mpu6050.h

 */

#ifndef INC_MPU6050_H_
#define INC_MPU6050_H_

#include <stdint.h>
#include "stm32f4xx_hal.h"
#include "sensordriver.h"

#define MPU6050_I2C_ADRESS_AD0 ( 0x68<<1 )
#define MPU6050_I2C_ADRESS_AD1 ( 0x69<<1 )



sensor_status_e MPU6050_test_sensor();



#endif /* INC_MPU6050_H_ */
