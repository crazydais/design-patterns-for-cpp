#pragma once

#include <string>

//	Interface
class Clams
{
public:
	Clams();
	virtual ~Clams();

	virtual std::string toString() = 0;
};
