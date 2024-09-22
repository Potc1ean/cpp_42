
#ifndef __ANIMAL__
# define __ANIMAL__

# include <iostream>
# include <string>

class Animal
{
public:
    Animal();
    Animal(std::string type);
    Animal(Animal &other);
    virtual ~Animal();

    Animal& operator=(const Animal &other);

    std::string getType() const;
    virtual void makeSound(void) const;

protected :
    std::string type;
};

# endif