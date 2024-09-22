#ifndef __HARL__
# define __HARL__

# include <iostream>
# include <string> 

class Harl
{
public:
    Harl(/* args */);
    ~Harl();

    void complain(std::string level);
    
private:
    void debug(void);
	void info(void);
	void warning(void);
	void error(void);
};




# endif