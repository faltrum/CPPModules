# include "Dog.hpp"
# include "Cat.hpp"
# include "WrongCat.hpp"

/*
	Con este main podemos ver como Cat y Dog trabajan sus clases.
	Podemos checkear que cada uno tiene un cerebro y cada uno es diferente
	para cada objeto.
*/

int	main(void)
{
	const AAnimal* i = new Cat();
	
	//Cases:
	//Creating a pointer works
	// const AAnimal *bear;
	// (void) bear;

	// Creating an AAnimal obect called pedro is not possible
	// const AAnimal pedro;
	// (void) pedro;

	delete i;
	
	Dog	Dog1;
	Dog	Dog2(Dog1);

	std::cout << std::endl;

	std::cout << "Dog1 address: " << &Dog1 << "\nDog2 address: " << &Dog2 << std::endl;
	std::cout << "Dog1 brain address: " << Dog1.getBrain() << "\nDog2 brain address: " << Dog2.getBrain() << std::endl;

	int	num = 6;
	AAnimal*	animals[num];

	for (int i = 0; i < num / 2; i++)
		animals[i] = new Dog();
	std::cout << std::endl;
	for (int i = num / 2; i < num; i++)
		animals[i] = new Cat();
	std::cout << std::endl;
	for (int i = 0; i < num; i++)
		delete animals[i];

	std::cout << std::endl;
	return 0;
}