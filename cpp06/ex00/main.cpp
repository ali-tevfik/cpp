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
        return 0;
        
    // }
    // else
    //     std::cout << "error" << std::endl;

    // //char
    //     Converter c("c");
    // double
    // //  float
    //     Converter f("1.3f");
    // //int
    //     Converter i("12");
}