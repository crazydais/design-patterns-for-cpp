#pragma once

#include "PizzaStore.h"

class NYPizzaStore : public PizzaStore
{
public:
	NYPizzaStore();
	~NYPizzaStore();

	//	The Factory Method - concrete implementation
	Pizza* createPizza(std::string);
};
