#include "NYStyleClamPizza.h"

NYStyleClamPizza::NYStyleClamPizza()
{
	this->name = "NY Style Clam Pizza";
	this->dough = "Thin Crust Dough";
	this->sauce = "Marinara Sauce";

	this->toppings.push_back("Grated Reggiano Cheese");
	this->toppings.push_back("Fresh Giant Clams");
	this->toppings.push_back("Oyster Sauce");

	std::cout << "Creating " << this->getName() << std::endl;
}


NYStyleClamPizza::~NYStyleClamPizza()
{
	std::cout << "Destroying " << this->getName() << std::endl;
}
