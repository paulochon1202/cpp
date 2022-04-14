#include <string>

class Contact
{
public:

	Contact();
	~Contact();
	void	take_info(void);
	void	give_info(void);
	void	give_litle_info(void);
private:

	std::string info[5];
	int	index;
};
