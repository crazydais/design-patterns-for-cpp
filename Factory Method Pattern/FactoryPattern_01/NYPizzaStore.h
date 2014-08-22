#pragma once

#include "PizzaStore.h"
#include "Pizza.h"
#include "NYStyleCheesePizza.h"
#include "NYStylePepperoniPizza.h"
#include "NYStyleClamPizza.h"
#include "NYStyleVeggiePizza.h"


class NYPizzaStore : public PizzaStore
{
public:
	NYPizzaStore();
	~NYPizzaStore();

	//	The Factory Method
	Pizza* createPizza(std::string);
};
