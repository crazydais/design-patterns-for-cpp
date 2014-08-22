#include "MallardDuck.h"


MallardDuck::MallardDuck()
{
	flyBehaviour = new FlyWithWings;
}

MallardDuck::~MallardDuck()
{
	delete flyBehaviour;
}

void MallardDuck::display()
{
	std::cout << "Mallard Duck\n";
	return;
}
