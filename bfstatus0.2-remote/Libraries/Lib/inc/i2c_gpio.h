#ifndef _BSP_I2C_GPIO_H
#define _BSP_I2C_GPIO_H

#include <inttypes.h>

#define I2C_WR	0		/* 写控制bit */
#define I2C_RD	1		/* 读控制bit */

void i2c_Start(void);
void i2c_Stop(void);
void i2c_SendByte(uint8_t _ucByte);
uint8_t i2c_ReadByte(void);
uint8_t i2c_WaitAck(void);
void i2c_Ack(void);
void i2c_NAck(void);
uint8_t i2c_CheckDevice(uint8_t _Address);
uint8_t WriteBytes(uint8_t h_addr,uint8_t _usAddress,uint8_t *_pWriteBuf, uint16_t _usSize);
uint8_t WriteByte(uint8_t h_addr,uint8_t _usAddress,uint8_t WriteBuf);
#endif
