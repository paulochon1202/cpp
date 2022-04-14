#include "phonebook.hpp"



PhoneBook::PhoneBook(void)
{
	this->amount = 0;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}

void	PhoneBook::add_info(void)
{
	if (this->amount >= this->max_amount)
		std::cout << "max amount is reach" << std::endl;
	this->Contacts[this->amount % this->max_amount].take_info();
	this->amount++;
	return ;
}

void	PhoneBook::search_info(void)
{
	if (this->amount == 0)
		std::cout << "no contact wtf..." << std::endl;
	std::string	str;
	//afficher le header ici avec ||index|poulet|fromage||
	//afficher tout les contacts en mode petit
	std::getline(std::cin, str);
	//verifier la taille de str == 1 et verifier que l'on ai acc2 a ce contact (index<=amount) 
	
}