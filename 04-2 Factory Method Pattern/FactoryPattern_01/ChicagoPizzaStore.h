#pragma once

#include "PizzaStore.h"

class ChicagoPizzaStore : public PizzaStore
{
public:
	ChicagoPizzaStore();
	~ChicagoPizzaStore();

	//	The Factory Method - concrete implementation
	Pizza* createPizza(std::string);
};

