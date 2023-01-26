#include "Converter.hpp"

int main(int argc, char **argv)
{
    if (argc == 2){
        try
        {
           Converter c(argv[1]);
            c.print();
        }
        catch(std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    else
        std::cout << "just 1 argument please" << std::endl;
        
    return 0;
}