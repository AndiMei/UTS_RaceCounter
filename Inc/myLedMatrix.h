/*
 * myLedMatrix.h
 *
 *  Created on: Oct 23, 2019
 *      Author: Andi
 */

#ifndef INC_MYLEDMATRIX_H_
#define INC_MYLEDMATRIX_H_

#include "stm32f1xx_hal.h"
#include "main.h"
#include "myMax7219.h"

#define LEDMATRIX7219_MAXLEDMATRIX MAX7219_ICNUMBER //number of led matrix connected

volatile uint8_t myLedMatrix_data[LEDMATRIX7219_MAXLEDMATRIX][8];

//functions
void myLedMatrix_init(void);
void myLedMatrix_reset(uint8_t ledmatrix);
void myLedMatrix_setmatrix(uint8_t ledmatrix, uint8_t rows[8]);
void myLedMatrix_setrow(uint8_t ledmatrix, uint8_t col, uint8_t row);
void myLedMatrix_setled(uint8_t ledmatrix, uint8_t lednum, uint8_t status);
void myLedMatrix_setledon(uint8_t ledmatrix, uint8_t lednum);
void myLedMatrix_setledoff(uint8_t ledmatrix, uint8_t lednum);
void myLedMatrix_setintensity(uint8_t ledmatrix, uint8_t intensity);

#endif /* INC_MYLEDMATRIX_H_ */
