#pragma once

#include "PizzaStore.h"

class ChicagoPizzaStore : public PizzaStore
{
public:
	ChicagoPizzaStore();
	~ChicagoPizzaStore();

	//	The Factory Method
	Pizza* createPizza(std::string);
};

