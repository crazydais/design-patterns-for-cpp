#include "NYStyleCheesePizza.h"

NYStyleCheesePizza::NYStyleCheesePizza()
{
	this->name = "NY Style Cheese Pizza";
	this->dough = "Thin Crust Dough";
	this->sauce = "Marinara Sauce";

	this->toppings.push_back("Grated Reggiano Cheese");
	this->toppings.push_back("Garlic");

	std::cout << "Creating " << this->getName() << std::endl;
}


NYStyleCheesePizza::~NYStyleCheesePizza()
{
	std::cout << "Destroying " << this->getName() << std::endl;
}


