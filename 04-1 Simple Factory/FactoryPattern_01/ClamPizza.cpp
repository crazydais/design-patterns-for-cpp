#include "ClamPizza.h"

ClamPizza::ClamPizza()
{
	this->name = "Clam Pizza";
	this->dough = "Thin Crust Dough";
	this->sauce = "Marinara Sauce";

	this->toppings.push_back("Grated Reggiano Cheese");
	this->toppings.push_back("Fresh Giant Clams");
	this->toppings.push_back("Oyster Sauce");

	std::cout << "Creating " << this->getName() << std::endl;
}


ClamPizza::~ClamPizza()
{
	this->toppings.erase(this->toppings.begin(), this->toppings.end());
	std::cout << "Destroying " << this->getName() << std::endl;
}
