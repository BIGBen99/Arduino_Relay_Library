/*
Relay.h - Library for Relay.
Created by Benoit Didry, August 6, 2015.
Released into the public domain.
*/
#ifndef RELAY_h
#define RELAY_h
#include "Arduino.h"
class Relay {
public:
Relay(byte relayPin);
void open();
void close();
void openOn(boolean state);
private:
byte _relayPin;
boolean _openOn;
};
#endif
