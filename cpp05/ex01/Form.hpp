#ifndef FORM_HPP
#define FORM_HPP

# include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

#define CYAN	"\033[36m"
#define RESET	"\033[0m"

class Form
{
private:
    std::string _name;
    bool _isSigned;
    int _gradeSign;
    int _gradeExecute;
public:
    Form(/* args */);
    Form(const std::string & name, int gradeSigned, int gradeExecute);
    Form(const Form & form);
    ~Form();
    
    //getter
    std::string getName()const;
    bool getIsSigned()const;
    int getSignedGrade()const;
    int getGradeExecute()const;

    Form &operator=( const Form & form);
    //besigned()
    void beSigned(const Bureaucrat & bureaucrat);
    //try catch
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

std::ostream &operator<<(std::ostream &os, const Form &form);
# endif