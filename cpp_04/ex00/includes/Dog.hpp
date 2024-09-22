#ifndef __DOG__
# define __DOG__

# include "Animal.hpp"

class Dog : public Animal
{
public:
    Dog();
    Dog(std::string type);
    Dog(Dog &other);
    ~Dog();

    Dog& operator=(const Dog &other);

    void makeSound() const;
};

# endif