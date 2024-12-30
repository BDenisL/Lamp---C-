//
// CONTROLLER_CPP
//
#include "Controller.h"
#include "Lamp.cpp"

Controller::Controller(){
	command = 'd';
	lamp = new Lamp();
}

void Controller::start(){	
	while( command != 'c' ){
		std::cout << "Turn ON the Lamp(o)\n";
		std::cout << "Turn OFF the Lamp(f)\n";
		std::cout << "Display current state(d)\n";
		std::cout << "Close program(c): ";
		
		std::cin >> command;
		
		switch( command ){
			case 'o':
				lamp->On();
				break;
			case 'f':
				lamp->Off();
				break;
			case 'd':
				lamp->Display();
				break;
			case 'c':
				std::cout << "\nClosing program....";
				break;
			default:
				std::cout << "\nType error.\n";
		}
	}
	lamp->~Lamp();
}

Controller::~Controller(){
	delete lamp;
}