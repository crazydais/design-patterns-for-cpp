#include "ChicagoStyleVeggiePizza.h"


ChicagoStyleVeggiePizza::ChicagoStyleVeggiePizza(PizzaIngredientFactory* arg_ingredientFactory)
{
	this->name = "Chicago Style Veggie Pizza";

	this->dough = arg_ingredientFactory->createDough();
	this->sauce = arg_ingredientFactory->createSauce();
	this->cheese = arg_ingredientFactory->createCheese();

	std::cout << "Creating " << this->getName() << std::endl;
}


ChicagoStyleVeggiePizza::~ChicagoStyleVeggiePizza()
{
}
