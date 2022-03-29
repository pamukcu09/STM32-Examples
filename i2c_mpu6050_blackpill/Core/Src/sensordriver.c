#include "sensordriver.h"
#include "stm32f4xx_hal.h"

#define I2C_TIMEOUT ( 100 )
#define I2C_NUMBER_OF_TRIALS ( 4 )




extern I2C_HandleTypeDef hi2c1;


sensor_status_e sensor_test_device( uint8_t chipAdd ) // bu fonksiyon ile i2c haberleşmesi testi yapılacak. HAL_OK dönerse
{													 // haberleşmede sıkıntı yok demektir.
	HAL_StatusTypeDef status;
	/*
	typedef enum
	{
	  HAL_OK       = 0x00U,
	  HAL_ERROR    = 0x01U,   HAL_StatusTypeDef bize yandaki durumları döndürecek.
	  HAL_BUSY     = 0x02U,
	  HAL_TIMEOUT  = 0x03U
	} HAL_StatusTypeDef;
	*/
    status = HAL_I2C_IsDeviceReady( &hi2c1, chipAdd, I2C_NUMBER_OF_TRIALS, I2C_TIMEOUT );

	if ( HAL_OK == status ) {
		return SENSOR_OK;
	}
	else {
		return SENSOR_ERROR;
	}
}
