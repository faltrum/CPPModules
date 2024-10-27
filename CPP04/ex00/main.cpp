# include "Dog.hpp"
# include "Cat.hpp"
# include "WrongCat.hpp"

/*
	Con este main podemos ver como Cat y Dog interactua con Animal Class.
	Podemos pareciar como el método Makesound es virtual y el output es
	diferente para cada objeto.
*/

int	main(void)
{
	{
		std::cout << std::endl << "---- ANIMALS ----" << std::endl;
		const	Animal *animal = new Animal();
		const	Animal *dog = new Dog();
		const	Animal *cat = new Cat();

		std::cout << std::endl;
		std::cout << dog->getType() << ": ";
		dog->makeSound();
		std::cout << cat->getType() << ": ";
		cat->makeSound();

		animal->makeSound();
		delete	animal;
		delete	dog;
		delete	cat;
	}
	{
		std::cout << std::endl << "---- WRONGANIMALS ----" << std::endl;
		const	WrongAnimal	*wronganimal = new WrongAnimal();
		const	WrongAnimal	*wrongcat = new WrongCat("WrongCat");

		std::cout << "WrongAnimal: " << wronganimal->getType() << ": ";
		wronganimal->makeSound();
		std::cout << "WrongCat: " << wrongcat->getType() << ": ";
		wrongcat->makeSound();

		delete wronganimal;
		delete wrongcat;
	}
	std::cout << "---- END ----" << std::endl;
	return (0);
}