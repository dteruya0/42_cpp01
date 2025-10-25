#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	private:
		std::string name;

	public:
		void announce(void);
		void setName(std::string name);
		std::string getName(void);
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif