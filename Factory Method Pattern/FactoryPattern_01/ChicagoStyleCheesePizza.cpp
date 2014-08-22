#include "ChicagoStyleCheesePizza.h"


ChicagoStyleCheesePizza::ChicagoStyleCheesePizza()
{
	this->name = "Chicago Style Cheese Pizza";
	this->dough = "Thick Crust Dough";
	this->sauce = "Plum Tomato Sauce";

	this->toppings.push_back("Mozzarella Cheese");
	this->toppings.push_back("Garlic");

	std::cout << "Creating " << this->getName() << std::endl;
}


ChicagoStyleCheesePizza::~ChicagoStyleCheesePizza()
{
	this->toppings.erase(this->toppings.begin(), this->toppings.end());
	std::cout << "Destroying " << this->getName() << std::endl;
}
