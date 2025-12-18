/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dteruya <dteruya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 12:50:00 by dteruya           #+#    #+#             */
/*   Updated: 2025/12/18 15:57:50 by dteruya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

static void printMessage(std::string to_print)
{
	std::cout << to_print;
}

static int nbrVerify(std::string nbr)
{
	int print;

	print = std::atoi(nbr.c_str());
	while(nbr.empty() || print <= 0)
	{
		printMessage("How many zombies do you want to create? ");
		std::getline(std::cin, nbr);
		print = std::atoi(nbr.c_str());
	}
	return print;
}

int	main(void)
{
	std::string heapZombie;
	Zombie *zombie;
	std::string nbr;
	int n;
	int i = 0;

	printMessage("How many zombies do you want to create? ");
	std::getline(std::cin, nbr);
	n = nbrVerify(nbr);
	printMessage("How do you want to name your zombies? ");
	std::getline(std::cin, heapZombie);
	while (heapZombie.empty())
	{
		printMessage("How do you want to name your zombies? ");
		std::getline(std::cin, heapZombie);
	}
	zombie = zombieHorde(n ,heapZombie);
	while (i < n)
	{
		zombie[i].announce();
		i++;
	}
	delete[] zombie;
	return 0;
}