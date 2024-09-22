#ifndef __WCAT__
# define __WCAT__

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
    WrongCat();
    WrongCat(std::string type);
    WrongCat(WrongCat &other);
    ~WrongCat();

    WrongCat& operator=(const WrongCat &other);

    void makeSound() const;
};

# endif