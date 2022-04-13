#include "contact.hpp"
#include <iostream>

Contact::Contact(void)
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}

void	Contact::take_info(void)
{
	std::cout << "first name : ";
	std::getline(std::cin, this->info[0]);
	std::cout << "last name : ";
	std::getline(std::cin, this->info[1]);
	std::cout << "nickname : ";
	std::getline(std::cin, this->info[2]);
	std::cout << "phone number : ";
	std::getline(std::cin, this->info[3]);
	std::cout << "darkest secret : ";
	std::getline(std::cin, this->info[4]);
	//std::cout << "first name : " << this->info[0] << std::endl;
	return ;
}

void	Contact::give_info(void)
{

