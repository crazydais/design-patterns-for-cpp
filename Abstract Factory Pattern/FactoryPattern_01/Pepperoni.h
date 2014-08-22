#pragma once

#include <string>

//	Interface
class Pepperoni
{
public:
	Pepperoni();
	virtual ~Pepperoni();

	virtual std::string toString() = 0;
};
