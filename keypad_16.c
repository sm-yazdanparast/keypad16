/*

 * status_rgb.h
 *
 *  Created on: 1396/6/7
 *      Author: seyed mojtaba yazdan parast

THIS LIBRARY IS CREATED FOR TTP229 
AND JAST RETURN THE KEY NUMBER 1-16
AND IF NO KEY TOUCHED RETURN 0
*/


/* Includes ------------------------------------------------------------------*/
#include "keypad_16.h"

 void statusKEYPADInit(void)
{

  GPIO_InitTypeDef GPIO_InitStruct;

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOC_CLK_ENABLE();
  __HAL_RCC_GPIOD_CLK_ENABLE();
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(SCL_GPIO_Port, SCL_Pin, GPIO_PIN_RESET);


  /*Configure GPIO pin : SCL_Pin */
  GPIO_InitStruct.Pin = SCL_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(SCL_GPIO_Port, &GPIO_InitStruct);

  /*Configure GPIO pin : SDO_Pin */
  GPIO_InitStruct.Pin = SDO_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(SDO_GPIO_Port, &GPIO_InitStruct);

}





int keynumber()
	 {
		 uint8_t number=0;
		 for(int j=1;j<17;j++)
		 {
		  	HAL_GPIO_WritePin(SCL_GPIO_Port,SCL_Pin,GPIO_PIN_RESET);
	  		//for(int i=0;i<10;i++);
	  		
			
		  	uint8_t retval = !HAL_GPIO_ReadPin(SDO_GPIO_Port ,SDO_Pin);
				
				if(retval)
			   	{
					number =j;
			   	}
					
		  	HAL_GPIO_WritePin(SCL_GPIO_Port,SCL_Pin,GPIO_PIN_SET);
		    //	for(int i=0;i<10;i++);
		  	
		  	
	   }
		 
	 }