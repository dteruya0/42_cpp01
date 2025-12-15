/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dteruya <dteruya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 18:17:55 by dteruya           #+#    #+#             */
/*   Updated: 2025/12/15 20:08:00 by dteruya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Usage: ./replace <file> <s1> <s2>\n";
		return 1;
	}
	std::ifstream infile(argv[1]);
	if (!infile)
	{
		std::cerr << "Error opening input file\n";
		return 1;
	}
	std::string outname = std::string(argv[1]) + ".replace";
	std::ofstream outfile(outname.c_str());
	if (!outfile)
	{
		std::cerr << "Error creating output file\n";
		return 1;
	}
	std::string line;
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	if (s1.empty())
		return 1;
	while (std::getline(infile, line))
	{
		std::size_t pos = 0;
		while ((pos = line.find(s1, pos)) != std::string::npos)
		{
			line.erase(pos, s1.length());
			line.insert(pos, s2);
			pos += s2.length();
		}
		outfile << line;
		if (!infile.eof())
			outfile << '\n';
	}
	infile.close();
	outfile.close();
	return 0;
}

