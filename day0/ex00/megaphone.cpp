#include <iostream>
#include <string>

int	main(int ac, char **av)
{
	int	i;
	int	j;

	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}

	for (j = 1; j < ac; j++)
	{
		std::string urf (av[j]);
		for (i = 0; i < urf.length(); i++)
			std::cout << (char)std::toupper(urf[i]);
		std::cout << std::endl;
	}
	return 0;
}
