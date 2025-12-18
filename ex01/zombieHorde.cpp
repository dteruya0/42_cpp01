/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dteruya <dteruya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 11:57:11 by dteruya           #+#    #+#             */
/*   Updated: 2025/12/18 15:56:56 by dteruya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie *horde;
	horde = new Zombie[N];
	int i = 0;

	while (i < N)
	{
		horde[i].setName(name);
		i++;
	}
	return horde;
}