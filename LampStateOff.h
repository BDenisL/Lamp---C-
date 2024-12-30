//
// LAMPSTATEOFF_H
//
#pragma once
#include "ILampState.h"

class LampStateOff : public ILampState{
	public:
		LampStateOff();
		void On() override;
		void Off() override;
		void Display() const override;
		virtual ~LampStateOff(){}
	private:
		LampStateOff( const LampStateOff& );
		LampStateOff& operator = ( const LampStateOff& stateOff );
};