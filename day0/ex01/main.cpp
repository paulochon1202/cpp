#include "phonebook.hpp"

int	main(void)
{
	char	*str;
	Contact	instance;

	std::cout << "# Welcome." << std::endl;
	std::cout << "# EXIT | ADD | SEARCH" << std::endl;
	std::getline(std::cin, str);
	while (str != "EXIT")
	{
		if (str == "ADD")
			instance.take_info();
		if (str == "SEARCH")
			annuaire.search_contact();
		std::getline(std::cin, str);
	}
	std::cout << "# Bye." << std::endl;	
	return (0);
}
