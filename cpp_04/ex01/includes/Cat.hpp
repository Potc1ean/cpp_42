#ifndef __CAT__
# define __CAT__

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
public:
    Cat();
    Cat(std::string type);
    Cat(Cat &other);
    ~Cat();

    Cat& operator=(const Cat &other);

    void makeSound() const;
    Brain* getBrain() const;
private :
    Brain *brain;
};

# endif