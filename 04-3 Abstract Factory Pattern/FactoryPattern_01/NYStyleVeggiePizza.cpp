#include "NYStyleVeggiePizza.h"

NYStyleVeggiePizza::NYStyleVeggiePizza(PizzaIngredientFactory* arg_ingredientFactory)
{
	this->setName();
	this->name = "NY Style " + this->pizzaType + " Pizza";
	this->setupIngredients(arg_ingredientFactory);
}

NYStyleVeggiePizza::~NYStyleVeggiePizza()
{
	delete this;
}

void NYStyleVeggiePizza::setName()
{
	this->pizzaType = "Veggie";
}


void NYStyleVeggiePizza::cut()
{
	std::cout << "Cutting " << this->getName() << " into SQUARE slices" << std::endl;
}

