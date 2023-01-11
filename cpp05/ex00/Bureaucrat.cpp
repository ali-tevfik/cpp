#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(/* args */)
{
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
    if (grade < 1)
        throw GradeTooHighException();
    else if (grade > 150)
        throw GradeTooLowException();
    _grade = grade;
}
Bureaucrat::Bureaucrat(Bureaucrat & bureaucrat)
{
    *this = bureaucrat;   
}

Bureaucrat::~Bureaucrat()
{
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return "GradeTooLow";
}
const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return "GradeTooHigh";
}


std::string Bureaucrat::getName()const{return this->_name;}
int Bureaucrat::getGrade()const{return this->_grade;}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat) {
    os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
    return os;
}

void Bureaucrat::promotion( void ) {
    if (_grade - 1 < 1)
        throw GradeTooHighException();
    std::cout << "Bureaucrat got a promotion"<< std::endl;
    _grade--;
}

void Bureaucrat::demotion( void ) {
    if (_grade + 1 > 150)
        throw GradeTooLowException();
    std::cout << "Bureaucrat got a demotion"<< std::endl;
    _grade++;
}
