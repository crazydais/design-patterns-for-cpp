#pragma once

#include <iostream>
#include <vector>
#include <list>
#include <iterator>
#include <string>
#include <iostream>


//	Abstract Class
class Pizza
{
protected:
	std::string name = "standard pizza";
	std::string dough = "standard dough";
	std::string sauce = "standard sauce";
	std::vector<std::string> toppings;

public:
	Pizza() {  }							// must override this in the subclass
	virtual ~Pizza() { 	}

	virtual void prepare() final
	{
		std::cout << "Preparing " << this->getName() << " with " << this->getDough() << " and " << this->getSauce() << ",\ntopped with";
		for (std::vector<std::string>::iterator it = this->toppings.begin(); it != this->toppings.end(); ++it)
		{
			std::cout << " " << *it;

			//	Get the next iterator so long as it's not the last element or the second last element (ie, -1 from the end)
			if (std::next(it) != this->toppings.end() && std::next(it) != this->toppings.end() - 1)
			{
				std::cout << ", ";
			}
			//	If it is the second last element, print out ", and" after having printed the second last element
			if (std::next(it) == this->toppings.end() - 1)
			{
				std::cout << ", and ";
			}
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
	
	virtual std::string getName()
	{
		return this->name;
	}
	
	virtual std::string getDough()
	{
		return this->dough;
	}
	
	virtual std::string getSauce()
	{
		return this->sauce;
	}
};
