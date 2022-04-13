#include "contact.hpp"

int	main(void)
{
	char	*str;
	Contact	instance;

	std::getline(std::cin, str);
	while (str != "EXIT")
	{
		if (str == "ADD")
			instance.take_info();
		if (str == "SEARCH")

	}
	return (0);
}
