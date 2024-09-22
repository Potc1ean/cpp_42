#ifndef __WANIMAL__
# define __WANIMAL__

# include <iostream>
# include <string>

class WrongAnimal
{
public:
    WrongAnimal();
    WrongAnimal(std::string type);
    WrongAnimal(WrongAnimal &other);
    virtual ~WrongAnimal();

    WrongAnimal& operator=(const WrongAnimal &other);

    std::string getType() const;
    void makeSound(void) const;

protected :
    std::string type;
};

# endif