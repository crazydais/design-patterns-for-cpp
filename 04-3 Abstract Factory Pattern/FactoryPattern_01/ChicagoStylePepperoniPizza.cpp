#include "ChicagoStylePepperoniPizza.h"


ChicagoStylePepperoniPizza::ChicagoStylePepperoniPizza(PizzaIngredientFactory* arg_ingredientFactory)
{
	this->setName();
	this->name = "Chicago Style " + this->pizzaType + " Pizza";
	this->setupIngredients(arg_ingredientFactory);
}

ChicagoStylePepperoniPizza::~ChicagoStylePepperoniPizza()
{

}

void ChicagoStylePepperoniPizza::setName()
{
	this->pizzaType = "Pepperoni";
}