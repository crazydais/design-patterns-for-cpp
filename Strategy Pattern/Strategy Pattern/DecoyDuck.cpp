#include "DecoyDuck.h"


DecoyDuck::DecoyDuck()
{
	flyBehaviour = new FlyNoWay;
}

DecoyDuck::~DecoyDuck()
{
	delete flyBehaviour;
}

void DecoyDuck::display()
{
	std::cout << "Decoy Duck\n";
	return;
}