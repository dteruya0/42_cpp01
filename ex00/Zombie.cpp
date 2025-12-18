/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dteruya <dteruya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 11:38:54 by dteruya           #+#    #+#             */
/*   Updated: 2025/12/18 16:08:35 by dteruya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	std::cout << "Constructor called. \n";
}

Zombie::~Zombie(void)
{
	std::cout << name << " died." << std::endl;
}

void Zombie::setName(std::string name)
{
	this->name = name;
}

std::string Zombie::getName(void)
{
	return (name);
}

void Zombie::announce(void)
{
	std::cout << getName() << ": BraiiiiiiinnnzzzZ...\n";
}