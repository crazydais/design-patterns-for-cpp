#pragma once

#include <iostream>
#include <vector>
#include <iterator>
#include <string>
#include <iostream>

#include "PizzaIngredientFactory.h"
#include "Ingredient.h"

//	Abstract Class
class Pizza
{
protected:
	std::string pizzaType;
	std::string name;
private:
	Ingredient* dough;
	Ingredient* sauce;
	Ingredient* cheese;
	Ingredient* pepperoni;
	Ingredient* clams;
	std::vector<Ingredient*> veggies;

public:
	Pizza()
	{
		
	}							// must override this in the subclass

	virtual ~Pizza()
	{

	}

	virtual void setupIngredients(PizzaIngredientFactory *arg_ingredientFactory)
	{
		this->dough = arg_ingredientFactory->createDough();
		this->sauce = arg_ingredientFactory->createSauce();
		this->cheese = arg_ingredientFactory->createCheese();
		this->veggies = arg_ingredientFactory->createVeggies();
	}

	virtual void setName()
	{

	}

	virtual std::string getName()
	{
		return this->name;
	}

	virtual std::string getDough()
	{
		
		return this->dough->toString();
	}

	virtual std::string getSauce()
	{
		return this->sauce->toString();
	}

	virtual std::string getCheese()
	{
		
		return this->cheese->toString();
	}

	virtual std::vector<Ingredient*> getVeggies()
	{
		return this->veggies;
	}

	virtual void prepare()
	{
		const std::vector<Ingredient*> vegToppings = getVeggies();

		std::cout << "Preparing " << this->getName() << " with " << this->getDough() << " and " << this->getSauce() << " covered in " << this->getCheese() << ",\ntopped with";
		if (vegToppings.empty() != true && this->pizzaType != "Cheese")
		{
			for (std::vector<Ingredient*>::const_iterator it = vegToppings.begin(); it != vegToppings.end(); ++it)
			{
				//	Cast 'Ingredient*' to the dereferenced iterator, so we can call the 'toString()' method
				std::cout << " " << ((Ingredient*)*it)->toString();

				//	Get the next iterator so long as it's not the last element or the second last element (ie, -1 from the end)
				if (std::next(it) != vegToppings.end() && std::next(it) != vegToppings.end() - 1)
				{
					std::cout << ", ";
				}
				//	If it is the second last element, print out ", and" after having printed the second last element
				if (std::next(it) == vegToppings.end() - 1)
				{
					std::cout << ", and ";
				}
			}
		}
		else
		{
			std::cout << " no toppings";
		}
		std::cout << std::endl;
	}

	virtual void bake()
	{
		std::cout << "Baking " << this->getName() << std::endl;
	}
	
	virtual void cut()
	{
		std::cout << "Cutting " << this->getName() << " into diagonal slices" << std::endl;
	}
	
	virtual void box()
	{
		std::cout << "Boxing " << this->getName() << std::endl;
	}
};
