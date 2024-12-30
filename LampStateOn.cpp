// 
// LAMPSTATEON_CPP
//
#include "LampStateOn.h"
#include <iostream>

LampStateOn::LampStateOn(){}

LampStateOn::LampStateOn( int _power ){
	if ( _power > 0 && _power < 100 ){
		power = _power;	
	}else{
		power = 1;
	}
}

void LampStateOn::On(){
	Display();
}

void LampStateOn::Off(){
	std::cout << "\n\nTurning OFF the Lamp.\n";
}

void LampStateOn::Display() const{
	std::cout << "\n\nThe Lamp is Currently ON.\n";
	std::cout << "Power: " << power << "\n";
}

