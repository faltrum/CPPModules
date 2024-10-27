#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <cstring>
# include <iomanip>

class WrongAnimal
{
	protected:
		std::string	_type;
	
	public:
		WrongAnimal();
		WrongAnimal(const std::string type);
		WrongAnimal(const WrongAnimal &src);
		~WrongAnimal();

		WrongAnimal &operator=(const WrongAnimal &src);

		std::string getType() const;
		void	setType(const std::string &type);

		void	makeSound() const;
};

#endif