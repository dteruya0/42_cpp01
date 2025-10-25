#include "HumanB.hpp"

void HumanB::attack()
{
	if (this->weapon)
		std::cout<< this->name << " attacks with their " << this->weapon->getType() << "\n" ;
	else
		std::cout<< this->name << " has no weapon!!\n";
}