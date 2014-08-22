#include "ChicagoStylePepperoniPizza.h"


ChicagoStylePepperoniPizza::ChicagoStylePepperoniPizza()
{
	this->name = "Chicago Style Pepperoni Pizza";
	this->dough = "Thick Crust Dough";
	this->sauce = "Plum Tomato Sauce";

	this->toppings.push_back("Mozzarella Cheese");
	this->toppings.push_back("Spicy Pepperoni");
	this->toppings.push_back("Garlic");
	this->toppings.push_back("Peppers");

	std::cout << "Creating " << this->getName() << std::endl;
}


ChicagoStylePepperoniPizza::~ChicagoStylePepperoniPizza()
{
	this->toppings.erase(this->toppings.begin(), this->toppings.end());
	std::cout << "Destroying " << this->getName() << std::endl;
}
