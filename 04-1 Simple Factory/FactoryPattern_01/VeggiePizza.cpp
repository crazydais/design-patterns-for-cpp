#include "VeggiePizza.h"

VeggiePizza::VeggiePizza()
{
	this->name = "Veggie Pizza";
	this->dough = "Thin Crust Dough";
	this->sauce = "Marinara Sauce";

	this->toppings.push_back("Grated Reggiano Cheese");
	this->toppings.push_back("Jucie Baby Tomatoes");
	this->toppings.push_back("Ripe Yellow Peppers");
	this->toppings.push_back("Herbalicious Pesto");

	std::cout << "Creating " << this->getName() << std::endl;
}


VeggiePizza::~VeggiePizza()
{
	this->toppings.erase(this->toppings.begin(), this->toppings.end());
	std::cout << "Destroying " << this->getName() << std::endl;
}

void VeggiePizza::cut()
{
	std::cout << "Cutting " << this->getName() << " into rectangle slices" << std::endl;
}

