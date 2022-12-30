# ifndef BUREAAUCRAT_HPP
#define BUREAAUCRAT_HPP 

#include <iostream>
#include <exception>

#include "Form.hpp"

class Form;

class Bureaucrat
{
private:
    std::string _name;
    int         _grade;
public:
    Bureaucrat(/* args */);
    Bureaucrat(std::string name, int grade);
    Bureaucrat(Bureaucrat & bureaucrat);
    ~Bureaucrat();
    std::string getName()const;
    int getGrade()const;
    void signForm(Form & form)const;

    class GradeTooHightException : public std::exception
    {
        public:
            virtual const char *what() const throw();
    };
    class GradeTooLowException : public std::exception{
        public:
            virtual const char *what() const throw();
    };



};



std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat);

#endif