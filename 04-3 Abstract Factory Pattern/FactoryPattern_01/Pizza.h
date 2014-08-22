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
	std::string name;
	Ingredient* dough;
	Ingredient* sauce;
	Ingredient* cheese;
	Ingredient* pepperoni;
	Ingredient* clams;
	std::vector<Ingredient*> veggies;

public:
	Pizza() {   }							// must override this in the subclass
	virtual ~Pizza()
	{
		for (std::vector<Ingredient*>::iterator it = this->veggies.begin(); it != this->veggies.end(); ++it)
		{
			delete *it;
		}

		this->veggies.erase(this->veggies.begin(), this->veggies.end());

		delete this->dough;
		delete this->sauce;
		delete this->cheese;
		delete this->pepperoni;
		delete this->clams;
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

	virtual void prepare()
	{
		std::cout << "Preparing " << this->getName() << " with " << this->getDough() << " and " << this->getSauce() << ",\ntopped with";
		if (this->veggies.empty() != true)
		{
			for (std::vector<Ingredient*>::iterator it = this->veggies.begin(); it != this->veggies.end(); ++it)
			{
				//	Cast 'Ingredient*' to the dereferenced iterator, so we can call the 'toString()' method
				std::cout << " " << ((Ingredient*)*it)->toString();

				//	Get the next iterator so long as it's not the last element or the second last element (ie, -1 from the end)
				if (std::next(it) != this->veggies.end() && std::next(it) != this->veggies.end() - 1)
				{
					std::cout << ", ";
				}
				//	If it is the second last element, print out ", and" after having printed the second last element
				if (std::next(it) == this->veggies.end() - 1)
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
