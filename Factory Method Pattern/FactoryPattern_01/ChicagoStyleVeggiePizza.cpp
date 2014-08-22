#include "ChicagoStyleVeggiePizza.h"


ChicagoStyleVeggiePizza::ChicagoStyleVeggiePizza()
{
	this->name = "Chicago Style Veggie Pizza";
	this->dough = "Thick Crust Dough";
	this->sauce = "Plum Tomato Sauce";

	this->toppings.push_back("Grated Reggiano Cheese");
	this->toppings.push_back("Jucie Baby Tomatoes");
	this->toppings.push_back("Ripe Yellow Peppers");
	this->toppings.push_back("Herbalicious Pesto");

	std::cout << "Creating " << this->getName() << std::endl;
}


ChicagoStyleVeggiePizza::~ChicagoStyleVeggiePizza()
{
	this->toppings.erase(this->toppings.begin(), this->toppings.end());
	std::cout << "Destroying " << this->getName() << std::endl;
}
