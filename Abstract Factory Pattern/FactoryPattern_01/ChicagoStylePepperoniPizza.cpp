#include "ChicagoStylePepperoniPizza.h"


ChicagoStylePepperoniPizza::ChicagoStylePepperoniPizza(PizzaIngredientFactory* arg_ingredientFactory)
{
	this->name = "Chicago Style Pepperoni Pizza";

	this->dough = arg_ingredientFactory->createDough();
	this->sauce = arg_ingredientFactory->createSauce();
	this->cheese = arg_ingredientFactory->createCheese();

	std::cout << "Creating " << this->getName() << std::endl;
}


ChicagoStylePepperoniPizza::~ChicagoStylePepperoniPizza()
{
}
