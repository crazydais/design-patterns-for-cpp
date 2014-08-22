#include "ChicagoPizzaStore.h"


ChicagoPizzaStore::ChicagoPizzaStore()
{
}


ChicagoPizzaStore::~ChicagoPizzaStore()
{
	delete this->pizza;
}

Pizza* ChicagoPizzaStore::createPizza(std::string arg_pizzaType)
{
	if (arg_pizzaType == "cheese")
	{
		this->pizza = new ChicagoStyleCheesePizza(new ChicagoPizzaIngredientFactory());
	}
	else if (arg_pizzaType == "pepperoni")
	{
		this->pizza = new ChicagoStylePepperoniPizza(new ChicagoPizzaIngredientFactory());
	}
	else if (arg_pizzaType == "clam")
	{
		this->pizza = new ChicagoStyleClamPizza(new ChicagoPizzaIngredientFactory());
	}
	else if (arg_pizzaType == "veggie")
	{
		this->pizza = new ChicagoStyleVeggiePizza(new ChicagoPizzaIngredientFactory());
	}

	return pizza;
}