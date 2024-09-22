#ifndef __DOG__
# define __DOG__

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
public:
    Dog();
    Dog(std::string type);
    Dog(Dog &other);
    ~Dog();

    Dog& operator=(const Dog &other);

    void makeSound() const;
    Brain* getBrain() const;
private :
    Brain *brain;
};

# endif