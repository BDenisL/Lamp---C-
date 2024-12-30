//
// LAMP_H
//
#pragma once
#include "ILampState.h"

class Lamp{
	public:
		Lamp();
		void On();
		void Off();
		void Display() const;
		void Change();
		~Lamp();
	private:
		ILampState* state;
		int power;
		Lamp( const Lamp& );
		Lamp& operator = ( const Lamp& _lamp );
};