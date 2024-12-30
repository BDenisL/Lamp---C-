//
// ILAMPSTATE_H
//
#pragma once 
#ifndef ILAMPSTATE_H
#define ILAMPSTATE_H

class ILampState{
	public:
		virtual void On() = 0;
		virtual void Off() = 0;
		virtual void Display() const = 0;
};

#endif 