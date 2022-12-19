#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Form
{
private:
    const std::string _name;
    bool _ifSigned;
    const int _gradeSign;
    const int _gradeExecute;
public:
    Form(/* args */);
    Form(Form * form);
    Form (std::string name, const int gradeSigned, const int gradeExecute);
    Form &operator=(const Form & form);
    virtual ~Form();


    std::string getName();
    const int getSign();
    const int getExecute();
    bool getSigned();

    void beSigned(Bureaucrat & bureaucrat);

    class GradeTooHightException : public std::exception
    {
        public:
            virtual const char *what() const throw();
    };
    class GradeTooLowExceptiom : public std::exception
    {
        public:
            virtual const char *what() const throw();
    };
};

std::ostream &operator<<(std::ostream &os, const Form &form);

#endif