#ifndef __BRAIN__
# define __BRAIN__

# include <iostream>
# include <string>

class Brain
{
public:
    Brain();
    Brain(const Brain& other);
    ~Brain();

    Brain& operator=(const Brain& rhs);

    const std::string& getIdea(int index) const;

private :
    std::string ideas[100];
};

#endif