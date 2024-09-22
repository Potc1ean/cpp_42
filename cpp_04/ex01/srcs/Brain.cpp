#include "../includes/Brain.hpp"

Brain::Brain()
{
    int i = 0;
    while(i < 99)
    {
        this->ideas[i] = "I want to eat.";
        this->ideas[i++] = "I want to sleep";
        i += 2;
    }
    std::cout << "Brain default constructor called." << std::endl;
}

Brain::Brain(const Brain& other)
{
    for(int i = 0; i < 100; i++)
        this->ideas[i] = other.getIdea(i);
    std::cout << "Brain copy constructor called." << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain default destructor called." << std::endl;
}

Brain& Brain::operator=(const Brain& rhs)
{
    if (this != &rhs)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = rhs.ideas[i];
	}
	return *this;
}

const std::string& Brain::getIdea(int index) const
{
    return this->ideas[index];
}