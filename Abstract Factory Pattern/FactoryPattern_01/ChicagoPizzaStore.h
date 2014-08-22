#pragma once

#include "PizzaStore.h"
#include "Pizza.h"
#include "ChicagoStyleCheesePizza.h"
#include "ChicagoStylePepperoniPizza.h"
#include "ChicagoStyleClamPizza.h"
#include "ChicagoStyleVeggiePizza.h"

class ChicagoPizzaStore : public PizzaStore
{
public:
	ChicagoPizzaStore();
	~ChicagoPizzaStore();

	// Cannot override 'orderPizza(std::string)', as it is declared as final in PizzaStore
	Pizza* createPizza(std::string);
};

