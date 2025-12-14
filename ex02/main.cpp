/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dteruya <dteruya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 11:39:08 by dteruya           #+#    #+#             */
/*   Updated: 2025/12/14 11:39:09 by dteruya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string phrase;
	phrase = "HI THIS IS BRAIN";
	std::string *stringPTR = &phrase;
	std::string &stringREF = phrase;

	std::cout<< "Adresses:\n";
	std::cout<< &phrase << "\n";
	std::cout<< &stringPTR << "\n";
	std::cout<< &stringREF << "\n\n";
	std::cout<< "Values:\n";
	std::cout<< phrase << "\n";
	std::cout<< stringPTR << "\n";
	std::cout<< stringREF << "\n";
	return 0;
}