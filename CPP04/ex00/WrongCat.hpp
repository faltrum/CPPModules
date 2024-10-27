#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class	WrongCat: public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(const std::string type);
		WrongCat(const WrongCat &src);
		~WrongCat();

		WrongCat &operator=(const WrongCat &src);

		void	makeSound() const;
};
#endif