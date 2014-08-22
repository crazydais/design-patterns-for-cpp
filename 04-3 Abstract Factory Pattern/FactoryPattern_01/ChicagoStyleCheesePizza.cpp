#include "ChicagoStyleCheesePizza.h"


ChicagoStyleCheesePizza::ChicagoStyleCheesePizza(PizzaIngredientFactory* arg_ingredientFactory)
{
	this->name = "Chicago Style Pepperoni Pizza";

	this->dough = arg_ingredientFactory->createDough();
	this->sauce = arg_ingredientFactory->createSauce();
	this->cheese = arg_ingredientFactory->createCheese();

	std::cout << "Creating " << this->getName() << std::endl;
}


ChicagoStyleCheesePizza::~ChicagoStyleCheesePizza()
{
	delete this->dough;
	delete this->sauce;
	delete this->cheese;
}
