#include "BitcoinExchange.hpp"

bool BitcoinExchange::isValidDate(const std::string &date) const 
{
    if (date.size() != 10 || date[4] != '-' || date[7] != '-')
        return false;
    int year, month, day;
    char dash1, dash2;
    std::istringstream ss(date);
    if (!(ss >> year >> dash1 >> month >> dash2 >> day))
        return false;
    if (dash1 != '-' || dash2 != '-')
        return false;
    if (month < 1 || month > 12 || day < 1 || day > 31)
        return false;
    return true;
}

bool BitcoinExchange::loadDatabase(const std::string &filename)
{
    std::ifstream file(filename.c_str());
    if (!file.is_open())
        return false;

    std::string line;
    std::getline(file, line);
    while (std::getline(file, line)) 
    {
        if (line.empty())
            continue;
        std::string date;
        std::string priceStr;
        std::stringstream ss(line);
        if (!std::getline(ss, date, ','))
            continue;
        if (!std::getline(ss, priceStr))
            continue;
        double price = std::atof(priceStr.c_str());
        data[date] = price;
    }
    file.close();
    return true;
}

double BitcoinExchange::getExchangeRate(const std::string &date) const
{
    if (data.find(date) != data.end())
        return data.find(date)->second;

    std::map<std::string, double>::const_iterator it = data.lower_bound(date);
    if (it == data.begin())
        return 0.0;
    if (it == data.end() || it->first != date)
        --it;
    return it->second;
}

void BitcoinExchange::processInput(const std::string &filename) const
{
    std::ifstream file(filename.c_str());
    if (!file.is_open())
    {
        std::cerr << "Error: could not open file." << std::endl;
        return;
    }

    std::string line;
    std::getline(file, line);
    while (std::getline(file, line))
    {
        if (line.empty())
            continue;

        std::string date;
        std::string valueStr;
        std::stringstream ss(line);

        if (!std::getline(ss, date, '|'))
        {
            std::cerr << "Error: bad input => " << line << std::endl;
            continue;
        }

        if (!(ss >> valueStr))
        {
            std::cerr << "Error: bad input => " << line << std::endl;
            continue;
        }

        while (!date.empty() && (date[date.size() - 1] == ' ' || date[date.size() - 1] == '\t'))
            date.erase(date.size() - 1);
        while (!valueStr.empty() && (valueStr[0] == ' ' || valueStr[0] == '\t'))
            valueStr.erase(0, 1);

        if (!isValidDate(date))
        {
            std::cerr << "Error: bad input => " << date << std::endl;
            continue;
        }

        char *end;
        double value = std::strtod(valueStr.c_str(), &end);

        if (*end != '\0')
        {
            std::cerr << "Error: bad input => " << line << std::endl;
            continue;
        }
        if (value < 0)
        {
            std::cerr << "Error: not a positive number." << std::endl;
            continue;
        }
        if (value > 1000)
        {
            std::cerr << "Error: too large a number." << std::endl;
            continue;
        }

        double rate = getExchangeRate(date);
        double result = rate * value;
        std::cout << date << " => " << value << " = " << result << std::endl;
    }
    file.close();
}
