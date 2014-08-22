#include "ChicagoStyleVeggiePizza.h"


ChicagoStyleVeggiePizza::ChicagoStyleVeggiePizza(PizzaIngredientFactory* arg_ingredientFactory)
{
	this->name = "Chicago Style Veggie Pizza";

	this->dough = arg_ingredientFactory->createDough();
	this->sauce = arg_ingredientFactory->createSauce();
	this->cheese = arg_ingredientFactory->createCheese();
	this->veggies = arg_ingredientFactory->createVeggies();

	std::cout << "Creating " << this->getName() << std::endl;
}


ChicagoStyleVeggiePizza::~ChicagoStyleVeggiePizza()
{
	for (std::vector<Ingredient*>::iterator it = this->veggies.begin(); it != this->veggies.end(); ++it)
	{
		delete *it;
	}

	this->veggies.erase(this->veggies.begin(), this->veggies.end());

	delete this->dough;
	delete this->sauce;
	delete this->cheese;
}
