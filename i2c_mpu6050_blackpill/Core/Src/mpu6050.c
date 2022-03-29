/*
 * mpu6050.c
 */

#include "mpu6050.h"
#include "sensordriver.h"


extern I2C_HandleTypeDef hi2c1; // başka bir modülde tanımlı bu değişkeni alması için
								// extern ifadesi ile yazdık.


sensor_status_e MPU6050_test_sensor()
{
	sensor_status_e retVal;
	retVal = sensor_test_device(MPU6050_I2C_ADRESS_AD1); // sensörün datasheetteki ilgili adresi yazıldı.
	return retVal;
}
