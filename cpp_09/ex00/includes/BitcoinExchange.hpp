#pragma once

#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <cstdlib>
#include <ctime>

class BitcoinExchange
{
    private:
        std::map<std::string, double> data;

        bool isValidDate(const std::string &date) const;
    public:
        BitcoinExchange() {}

        bool loadDatabase(const std::string &filename);
        double getExchangeRate(const std::string &date) const;
        void processInput(const std::string &filename) const;
};
