#include "CheesePizza.h"

CheesePizza::CheesePizza()
{
	this->name = "Cheese Pizza";
	this->dough = "Thin Crust Dough";
	this->sauce = "Marinara Sauce";

	this->toppings.push_back("Grated Reggiano Cheese");
	this->toppings.push_back("Garlic");

	std::cout << "Creating " << this->getName() << std::endl;
}


CheesePizza::~CheesePizza()
{
	this->toppings.erase(this->toppings.begin(), this->toppings.end());
	std::cout << "Destroying " << this->getName() << std::endl;
}


