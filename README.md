# PicoPLC
 This is PICO Board FX2N Library
# Edition released
  - v 1.0.0 

# Function descriptions
  void     initPLC();       >> Must be in setup funtion
  void     PLC_Task();      >> Must be in loop function
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
