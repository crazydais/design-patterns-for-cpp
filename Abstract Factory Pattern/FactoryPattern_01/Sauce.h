#pragma once

#include <string>

//	Interface
class Sauce
{
public:
	Sauce();
	virtual ~Sauce();

	virtual std::string toString() = 0;
};
