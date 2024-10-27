#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal
{
    private:
        Brain   *_brain;
    public:
        Dog();
        Dog(const std::string &type);
        Dog(const Dog &src);
        ~Dog();

        Dog &operator=(const Dog &src);

        Brain   *getBrain() const;
        void    setBrain(Brain *brain);

        void makeSound() const;
};

#endif