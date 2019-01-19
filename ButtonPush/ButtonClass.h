#ifndef ButtonClass_h
#define ButtonClass_h

#include "Arduino.h"

class ButtonClass {
  public:
  ButtonClass(byte ledpin);
  bool button_release(byte button);
  bool button_click(byte button);
  bool button_hold(byte button);

  private:
  byte _pin;
  int buttonHistory[2];
  bool returnBool;
};

#endif

