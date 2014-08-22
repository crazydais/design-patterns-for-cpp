#pragma once

#include <iostream>

class FlyBehaviour     // interface which all flying behaviour classes implement
{
public:
	virtual void fly() = 0;
};