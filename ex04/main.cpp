#include <fstream>
#include <iostream>
#include <string.h>


int main (int argc, char **argv)
{
	size_t	i;
	std::string line;
	std::size_t pos;

	if (argc != 4)
		return 1;
	else
	{
		std::ifstream file(argv[1]);
		if (!file.is_open())
			return 1;
		while(std::getline(file, line))
		{
			i = 0;
			pos = line.find(argv[2]);
			while (i < strlen(argv[3]))
			{
				line[pos] = argv[3][i];
				i++;
				pos++;
			}
			//TA ERRADO MANO !!!!!!!!!
			std::ofstream MyFile("filename.txt");
			MyFile << line;
		}
		file.close();
	}
	return 0;
}
