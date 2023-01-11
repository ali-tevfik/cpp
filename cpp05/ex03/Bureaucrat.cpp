#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(/* args */)
{
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
    if (grade < 1)
        throw GradeTooLowException();
    else if (grade > 150)
        throw GradeTooHighException();
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
    return "GradeTooHight";
}
const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return "GradeTooHight";
}

void Bureaucrat::signForm(AForm & form)const{
    try
    {
        form.beSigned(*this);
        std::cout << _name << " signed "<< form.getName() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << _name << " can-t sign " << form.getName() << " because " << e.what()<< std::endl;
    }
    
}
std::string Bureaucrat::getName()const{return this->_name;}
int Bureaucrat::getGrade()const{return this->_grade;}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat) {
    os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
    return os;
}

void Bureaucrat::executeForm( const AForm& form) const {
    try {
        form.execute(*this);
        std::cout << _name << " executed " << form.getName() << std::endl;
    }
    catch(const std::exception& exception) {
        std::cout << _name << " couldn't execute " << form.getName() << " because " << exception.what() << std::endl;
    }
}