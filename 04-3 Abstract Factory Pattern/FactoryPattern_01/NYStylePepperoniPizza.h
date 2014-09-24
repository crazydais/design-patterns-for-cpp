#pragma once

#include "Pizza.h"


class NYStylePepperoniPizza : public Pizza
{
public:
	NYStylePepperoniPizza(PizzaIngredientFactory*);
	~NYStylePepperoniPizza();
	void setName();
};
