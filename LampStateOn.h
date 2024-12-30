//
// LAMPSTATEON_H
//
#pragma once
#include "ILampState.h"

class LampStateOn : public ILampState{
	public:
		LampStateOn();
		LampStateOn( int );
		void On() override;
		void Off() override;
		void Display() const override;
		virtual ~LampStateOn(){}
	private:
		int power;
		LampStateOn( const LampStateOn& );
		LampStateOn& operator = ( const LampStateOn& stateOn );
};