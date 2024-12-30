// 
// CONTROLLER_H
//
#pragma once
#include "Lamp.h"

class Controller{
	public:
		Controller();
		void start();
		~Controller();
	private:
		Lamp* lamp;
		int power;
		char command;
		Controller( const Controller& );
		Controller& operator = ( const Controller& );
};
