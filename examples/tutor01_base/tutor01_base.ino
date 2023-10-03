/*++++++++++++++++++++++++++++++++++++++++++++++++++++++
Example 1 - Basic arduino for FX2N PLC Function
++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
#include <PicoPLC.h>
long lastTime;
bool m0;

//- This is 1st Core setup function
void setup(){
  initPLC();
}
//- This is 2nd Core setup function
void setup1(){
  initRS4850();                     //- General perpose rs485
}

//- This is 1st Core loop function
void loop(){
  if(millis() - lastTime > 500){    //- Random value and assing to D100
    setU16D(0,random(0,999));
    m0 = getM(0);
  }
  PLC_Task();                       //- Main ladder 
}
//- This is 2nd Core loop function
void loop1(){
  MODBUS_Task();                    //- Modbus RTU task
  delay(2);
}
