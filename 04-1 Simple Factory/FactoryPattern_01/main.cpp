#include "PizzaStore.h"


int main()
{
	PizzaStore *pizzaStore = new PizzaStore();



	pizzaStore->orderPizza("cheese");

	std::cout << "\n-------------------------------\n" << std::endl;

	pizzaStore->orderPizza("pepperoni");

	std::cout << "\n-------------------------------\n" << std::endl;

	pizzaStore->orderPizza("clam");

	std::cout << "\n-------------------------------\n" << std::endl;

	pizzaStore->orderPizza("veggie");

	std::cout << "\n\n" << std::endl;

	return 0;
}