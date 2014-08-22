#pragma once

#include "Pizza.h"

class NYStyleVeggiePizza : public Pizza
{
public:
	NYStyleVeggiePizza(PizzaIngredientFactory*);
	~NYStyleVeggiePizza();
	void cut();
};
