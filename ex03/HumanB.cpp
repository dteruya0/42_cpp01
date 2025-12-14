/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dteruya <dteruya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 11:39:32 by dteruya           #+#    #+#             */
/*   Updated: 2025/12/14 11:39:33 by dteruya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
	: name(name) {}

void HumanB::setWeapon(Weapon& newWeapon)
{
	this->weapon = &newWeapon;
}


void HumanB::attack()
{
	if (this->weapon)
		std::cout<< this->name << " attacks with their " << this->weapon->getType() << "\n" ;
	else
		std::cout<< this->name << " has no weapon!!\n";
}