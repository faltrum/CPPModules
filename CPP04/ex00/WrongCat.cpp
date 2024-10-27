# include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
    std::cout << "Wrongcat default constructor called." << std::endl;
}

WrongCat::WrongCat(const std::string type) : WrongAnimal(type)
{
    std::cout << "WrongCat constructor called." << std::endl;
}

WrongCat::WrongCat(const WrongCat &src) : WrongAnimal(src)
{
    std::cout << "WrongCat copy constructor called." << std::endl;
}

WrongCat::WrongCat() { std::cout << "Wrongcar desctructor called." << std::endl; }

WrongCat &WrongCat::operator=(const WrongCat &src)
{
    if (this != &src)
        this->_type = src._type;
    std::cout << "WrongCat copy assigment operator called." << std::endl;
    return (*this);
}

void	WrongCat::makeSound() const { std::cout << "meow meow" << std::endl; }