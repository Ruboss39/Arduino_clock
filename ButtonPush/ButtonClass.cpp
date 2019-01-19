#include "Arduino.h"
#include "ButtonClass.h"

ButtonClass::ButtonClass(byte pin)
{
  pinMode(pin,INPUT_PULLUP);
  byte _pin = pin;
  int buttonHistory[2];
  bool returnBool;
}

bool ButtonClass::button_release(byte button) {

  buttonHistory[0] = buttonHistory[1];
  buttonHistory[1] = digitalRead(button);
  returnBool = false;
  
  if (buttonHistory[1] != buttonHistory[0]) {
	  
	    if (buttonHistory[1] == 1) {
		  
	     returnBool = true;
	    }
	  
	delay(45);
  }
  return returnBool;
}

bool ButtonClass::button_hold(byte button) {

  buttonHistory[0] = buttonHistory[1];
  buttonHistory[1] = digitalRead(button);
  returnBool = false;

  if (buttonHistory[0] == buttonHistory[1]) {
    if (buttonHistory[0] == 0) {
		  
	    returnBool = true;
	  }
  }
  return returnBool;
}

bool ButtonClass::button_click(byte button) {
	
  buttonHistory[0] = buttonHistory[1];
  buttonHistory[1] = digitalRead(button);
  returnBool = false;
  
  if (buttonHistory[1] != buttonHistory[0]) {
	  
	    if (buttonHistory[1] == 0) {
		  
	      returnBool = true;
	    }
	  
	delay(45);
  }
  return returnBool;
}
