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