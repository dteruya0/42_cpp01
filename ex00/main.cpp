/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dteruya <dteruya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 12:50:00 by dteruya           #+#    #+#             */
/*   Updated: 2025/12/17 16:43:18 by dteruya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

static void printMessage(std::string to_print)
{
	std::cout << to_print << std::endl;
}

int	main(void)
{
	std::string stackZombie;
	std::string heapZombie;
	Zombie *zombie;
	int	i = 0;
	while(1)
	{
		if (i >= 2)
			break;
		printMessage("How do you want to name your zombie?(Heap) ");
		std::getline(std::cin, heapZombie);
		if (!heapZombie.empty())
			i++;
		printMessage("How do you want to name your zombie?(Stack) ");
		std::getline(std::cin, stackZombie);
		if (!stackZombie.empty())
			i++;
	}
	zombie = newZombie(heapZombie);
	randomChump(stackZombie);
	delete zombie;
	return 0;
}