#include "Bureaucrat.hpp"

int main()
{
   
{
    std::cout <<  "[ TEST_1 ] adoner 2 " << std::endl;
    try {
        Bureaucrat b("adoner", 2);
        std::cout << b.getName() << " , bureaucrat grade " << b.getGrade() << std::endl;
    }
    catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
}
{
    std::cout << std::endl;
    std::cout <<  "[ TEST_2 ] adoner 1000 " << std::endl;
    try {
        Bureaucrat b("adoner", 1000);
        std::cout << b.getName() << " , bureaucrat grade " << b.getGrade() << std::endl;
    }
    catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
}
{
    std::cout << std::endl;
    std::cout <<  "[ TEST_3 ] adoner -5 " << std::endl;
    try {
        Bureaucrat b("adoner", -5);
        std::cout << b.getName() << " , bureaucrat grade " << b.getGrade() << std::endl;
    }
    catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
}
{
    std::cout << std::endl;
    std::cout <<  "[ TEST_4 ] no try catch | no crash (adoner 6) " << std::endl;
    Bureaucrat b("adoner", 6);
    std::cout << b.getName() << " , bureaucrat grade " << b.getGrade() << std::endl;
}
{
    std::cout << std::endl;
    std::cout <<  "[ TEST_5 ] no try catch | crash (adoner -6) " << std::endl;
    Bureaucrat b("adoner", -6);
    std::cout << b.getName() << " , bureaucrat grade " << b.getGrade() << std::endl;
}
}