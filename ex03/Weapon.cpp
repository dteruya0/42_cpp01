#include "Weapon.hpp"

void Weapon::setWeapon(Weapon weapon)
{
	this.setType() = weapon.getType();
}

std::string Weapon::getType(void)
{
	return (type);
}

void Weapon::setType(std::string type)
{
	this->type = type;
}