#pragma once

#include <string>

//	Interface
class Cheese
{
public:
	Cheese();
	virtual ~Cheese();

	virtual std::string toString() = 0;
};
