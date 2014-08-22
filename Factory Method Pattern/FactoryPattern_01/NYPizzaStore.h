#pragma once

#include "PizzaStore.h"

class NYPizzaStore : public PizzaStore
{
public:
	NYPizzaStore();
	~NYPizzaStore();

	//	The Factory Method
	Pizza* createPizza(std::string);
};
