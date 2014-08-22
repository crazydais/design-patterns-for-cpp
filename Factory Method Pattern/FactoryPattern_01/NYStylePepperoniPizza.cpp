#include "NYStylePepperoniPizza.h"

NYStylePepperoniPizza::NYStylePepperoniPizza()
{
	this->name = "NY Style Pepperoni Pizza";
	this->dough = "Thin Crust Dough";
	this->sauce = "Marinara Sauce";
	
	this->toppings.push_back("Grated Reggiano Cheese");
	this->toppings.push_back("Spicy Pepperoni");
	this->toppings.push_back("Italian Herbs");

	std::cout << "Creating " << this->getName() << std::endl;

}


NYStylePepperoniPizza::~NYStylePepperoniPizza()
{
	std::cout << "Destroying " << this->getName() << std::endl;
}
