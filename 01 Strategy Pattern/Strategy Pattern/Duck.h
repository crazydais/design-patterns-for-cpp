#pragma once

#include "FlyBehaviour.h"
#include "FlyWithWings.h"
#include "FlyNoWay.h"


class Duck
{
protected:
	FlyBehaviour*  flyBehaviour;				// reference to an object which implements flyBehaviour interface

public:
	Duck(){};
	virtual ~Duck(){};

	void performFly()
	{
		flyBehaviour->fly();					// delegate to the behaviour class
	}

	void setFlyBehaviour(FlyBehaviour*  fb)     // allow the behaviour to be set at run-time
	{
		delete flyBehaviour;					// delete the old flybehaviour pointer, as not to cause a memory leak
		flyBehaviour = fb;

	}
	void swim()
	{
		std::cout << "splash splash...\n";
	}

	virtual void display() = 0;
};