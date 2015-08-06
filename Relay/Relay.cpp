/*
Relay.cpp - Library for Relay.
Created by Benoit Didry, August 6, 2015.
Released into the public domain.
*/
#include "Arduino.h"
#include "Relay.h"
Relay::Relay(int relayPin) {
  _relayPin = relayPin;
  _openOn = LOW;
  pinMode(_relayPin, OUTPUT);
}
void Relay::open() {
	digitalWrite(_relayPin, _openOn)
}
void Relay::close() {
	digitalWrite(_relayPin, !_openOn)
}
void Relay::openOn(boolean state) {
	_openOn = state;
}
