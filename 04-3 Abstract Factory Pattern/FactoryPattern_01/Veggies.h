#pragma once

#include <string>

//	Interface
class Veggies
{
public:
	Veggies();
	virtual ~Veggies();

	virtual std::string toString() = 0;
};
