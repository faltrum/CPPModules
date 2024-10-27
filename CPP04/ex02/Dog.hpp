#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog: public AAnimal
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