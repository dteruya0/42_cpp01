/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dteruya <dteruya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 11:38:59 by dteruya           #+#    #+#             */
/*   Updated: 2025/12/17 16:52:15 by dteruya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	private:
		std::string name;

	public:
		Zombie(void);
		~Zombie(void);
		void announce(void);
		void setName(std::string name);
		std::string getName(void);
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif