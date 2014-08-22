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

	// Cannot override 'orderPizza(std::string)', as it is declared as final in PizzaStore
	Pizza* createPizza(std::string);
};
