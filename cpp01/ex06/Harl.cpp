#include "Harl.hpp"

Harl::Harl(/* args */)
{
    return ;
}

Harl::~Harl()
{
    return ;
}


void Harl::DEBUG()
{
    std::cout << "[DEBUG]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;

}


void Harl::INFO()
{
    std::cout << "[INFO]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::WARNING()
{
    std::cout << "[WARNING]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::ERROR()
{
    std::cout << "[ERROR]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain( std::string level )
{
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i;
	for (i = 0; i < 4; i++)
    {
    	if (levels[i] == level)
            break;
    }
    switch (i) {
        case 0 : DEBUG(); 
        case 1 : INFO();
        case 2 : WARNING();
        case 3 : ERROR();
        break;
        default : std::cout << "ERROR" << std::endl;
    }
}
