#ifndef __CAT__
# define __CAT__

# include "Animal.hpp"

class Cat : public Animal
{
public:
    Cat();
    Cat(std::string type);
    Cat(Cat &other);
    ~Cat();

    Cat& operator=(const Cat &other);

    void makeSound() const;
};

# endif