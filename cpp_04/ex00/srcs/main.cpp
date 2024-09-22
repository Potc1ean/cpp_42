#include "../includes/WrongAnimal.hpp"
#include "../includes/WrongCat.hpp"
#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();

    std::cout<< std::endl;
    std::cout<< "----------------------------" <<std::endl;
    std::cout<< std::endl;

    const WrongAnimal* k = new WrongCat();
	const WrongCat* l = new WrongCat("Prout prout");
    std::cout << k->getType() << " " << std::endl;
	std::cout << l->getType() << " " << std::endl;
    k->makeSound();
	l->makeSound();

    std::cout<< std::endl;
    std::cout<< "----------------------------" <<std::endl;
    std::cout<< std::endl;

    delete meta;
	delete i;
	delete j;
	delete k;
	delete l;
    return 0;
}

