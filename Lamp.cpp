//
// LAMP_CPP 
//
#include "Lamp.h"
#include "LampStateOn.cpp"
#include "LampStateoff.cpp"

Lamp::Lamp(){
	state = new LampStateOff();
	power = 0;
}


void Lamp::Change(){
	delete state;
}

void Lamp::On(){
	Change();
	
	std::cout << "\nInitialice power: ";
	std::cin >> power;
				
	state = new LampStateOn( power );
	
	state->On();
}

void Lamp::Off(){
	Change();
	
	state = new LampStateOff();
	
	state->Off();
}

void Lamp::Display() const{
	state->Display();
}

Lamp::~Lamp(){
	delete state;
}
