#pragma once

#include "Pizza.h"
#include "CheesePizza.h"
#include "PepperoniPizza.h"
#include "ClamPizza.h"
#include "VeggiePizza.h"

class SimpleFactory
{
private:
	Pizza* pizza;

public:
	SimpleFactory();
	~SimpleFactory();

	Pizza* createPizza(std::string);
};

