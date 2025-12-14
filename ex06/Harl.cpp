/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dteruya <dteruya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 12:27:10 by dteruya           #+#    #+#             */
/*   Updated: 2025/10/29 13:27:09 by dteruya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::complain(std::string level)
{
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i = 0;

	while (i < 4)
	{
		if (levels[i] == level)
			break;
		i++;
	}
	switch (i)
	{
		case 0:
			this->debug();
			break;
		case 1:
			this->info();
			break;
		case 2:
			this->warning();
			break;
		case 3:
			this->error();
			break;
		default:
			std::cout << "Nível desconhecido." << std::endl;
	}
}

void Harl::debug(void)
{
	std::cout << "DEBUG\n";
	std::cout << "Eu amo ter bacon extra para o meu hambúrguer 7XL-duplo-queijo-"
	"triplopicles-ketchup-especial. Eu realmente amo!\n";
	this->info();
}

void Harl::info(void)
{
	std::cout << "INFO\n";
	std::cout << "Eu não acredito que adicionar bacon extra custa mais dinheiro. Vocês"
	" não colocaram bacon suficiente no meu hambúrguer! Se vocês tivessem colocado, eu"
	" não estaria pedindo por mais!\n";
	this->warning();
}

void Harl::warning(void)
{
	std::cout << "WARNING\n";
	std::cout << "Eu acho que mereço ter bacon extra de graça. Eu venho aqui há anos,"
	" enquanto você começou a trabalhar aqui apenas no mês passado.\n";
	this->error();
}

void Harl::error(void)
{
	std::cout << "ERROR\n";
	std::cout << "Isto é inaceitável! Eu quero falar com o gerente agora.\n";
}