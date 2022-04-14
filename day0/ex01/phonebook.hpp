#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include "Contact.hpp"

class PhoneBook
{
	
private
	Contact	Contacts[8];
	static  int	max_amount;
	int			amount;

public
	PhoneBook(void);
	~PhoneBook(void);
	void	add_info(void);
	void	search_info(void)static;

};

#endif
