#ifndef PICOPLC_H
#define PICOPLC_H
#include <Arduino.h>
#include "LittleFS.h"
#include <ArduinoJson.h>
#include <PicoAnalogCorrection.h>

//------------------- Main Function Parts -------------------
extern void initRS4850();           //- Uart 1
extern void MODBUS_Task();

void     initPLC();
void     PLC_Task();
bool     getM(uint16_t addr);
void     setM(uint16_t addr);
void     resetM(uint16_t addr);
uint8_t  getU8D(uint16_t addr);
uint16_t getU16D(uint16_t addr);
uint32_t getU32D(uint16_t addr);
uint16_t getT(uint16_t _t);
uint16_t getC(uint16_t _t);
float    getFD(uint16_t addr);
void     setU8D(uint16_t addr,uint8_t val);
void     setU16D(uint16_t addr,uint16_t val);
void     setU32D(uint16_t addr,uint32_t val);
void     setFD(uint16_t addr,float val);

//------------------- LED Status function ------------------

#endif