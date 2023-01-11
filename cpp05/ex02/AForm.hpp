#ifndef AFORM_HPP
#define AFORM_HPP

# include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

#define CYAN	"\033[36m"
#define RED  	"\033[31m"
#define GREEN 	"\033[32m"
#define YELLOW 	"\033[33m"
#define GREY	"\033[1;30m"
#define RESET	"\033[0m"

class AForm
{
private:
    std::string _name;
    bool _isSigned;
    int _gradeSign;
    int _gradeExecute;
public:
    AForm(/* args */);
    AForm(const std::string & name, int gradeSigned, int gradeExecute);
    AForm(const AForm & Aform);
    virtual ~AForm();
    
    //getter
    std::string getName()const;
    bool getIsSigned()const;
    int getSignedGrade()const;
    int getGradeExecute()const;

    virtual void execute(Bureaucrat const & executor) const = 0;
    void execute_base( Bureaucrat const & executor) const;

    AForm &operator=( const AForm & Aform);
    //besigned()
    void beSigned(const Bureaucrat & bureaucrat);
    //try catch
    class GradeTooHighException : public std::exception
    {
        public:
            virtual const char *what() const throw();
    };
    class GradeTooLowException : public std::exception{
        public:
            virtual const char *what() const throw();
    };
    class signedException : public std::exception{
        public:
            virtual const char *what() const throw();
    };

};

std::ostream &operator<<(std::ostream &os, const AForm &Aform);
# endif