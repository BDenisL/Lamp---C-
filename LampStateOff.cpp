//
// LAMPSTATEOFF_CPP
//
#include "LampStateOff.h"
#include <iostream>

LampStateOff::LampStateOff(){}

void LampStateOff::On(){
	std::cout << "\n\nTurning ON the Lamp.\n";
}

void LampStateOff::Off(){
	Display();
}

void LampStateOff::Display() const{
	std::cout << "\n\nThe Lamp is currently OFF.\n";
}