/*

 * status_rgb.h
 *
 *  Created on: 1396/6/7
 *      Author: seyed mojtaba yazdan parast

THIS LIBRARY IS CREATED FOR TTP229 
AND JAST RETURN THE KEY NUMBER 
AND IF NO KEY TOUCHED RETURN 0
*/

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __KEYPAD_16_H_
#define __KEYPAD_16_H_

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private define ------------------------------------------------------------*/

/* define RGB pin's */
#define SCL_Pin         GPIO_PIN_3
#define SCL_GPIO_Port   GPIOA
#define SDO_Pin         GPIO_PIN_4
#define SDO_GPIO_Port   GPIOA

/* Exported functions ------------------------------------------------------- */
int keynumber();

#endif /* STATUS_RGB_H_ */