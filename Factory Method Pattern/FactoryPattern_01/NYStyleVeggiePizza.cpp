#include "NYStyleVeggiePizza.h"

NYStyleVeggiePizza::NYStyleVeggiePizza()
{
	this->name = "NY Style Veggie Pizza";
	this->dough = "Thin Crust Dough";
	this->sauce = "Marinara Sauce";

	this->toppings.push_back("Grated Reggiano Cheese");
	this->toppings.push_back("Jucie Baby Tomatoes");
	this->toppings.push_back("Ripe Yellow Peppers");
	this->toppings.push_back("Herbalicious Pesto");

	std::cout << "Creating " << this->getName() << std::endl;
}


NYStyleVeggiePizza::~NYStyleVeggiePizza()
{
	std::cout << "Destroying " << this->getName() << std::endl;
}

void NYStyleVeggiePizza::cut()
{
	std::cout << "Cutting " << this->getName() << " into rectangle slices" << std::endl;
}

