#include "Form.hpp"

Form::Form(/* args */)
{
    _name = "";
    _gradeExecute = 0;
    _gradeSign = 0;
    _isSigned = false;
}
Form::Form(const Form & form)
{
    *this = form;
}
Form ::Form(const std::string & name, int gradeSigned, int gradeExecute)
{
    _name = name;
    _gradeSign = gradeSigned;
    _gradeExecute = gradeSigned;
    _isSigned = false;
    if (_gradeSign < 1 || _gradeExecute < 1)
        throw GradeTooLowException();
    if (_gradeExecute > 150 || _gradeSign > 150)
        throw GradeTooHightException();
}

void Form::beSigned(const Bureaucrat & bureaucrat){
    if (bureaucrat.getGrade() > getSignedGrade())
        throw Bureaucrat::GradeTooLowException();
    _isSigned = true;
}

Form::~Form()
{
}

//https://www.tutorialspoint.com/const-cast-in-cplusplus-type-casting-operators#:~:text=const_cast%20is%20one%20of%20the,changed%20occasionally%20at%20some%20point.
Form &Form::operator=(const Form & form)
{
    _isSigned = form.getIsSigned();
    const_cast<int &>(_gradeSign) = form.getSignedGrade();
    const_cast<std::string &>(_name) = form.getName();
    const_cast<int &>(_gradeExecute) = form.getGradeExecute();
    return *this;
}


std::string Form::getName()const{
    return _name;
}

int Form::getSignedGrade()const{
    return _gradeSign;
}

int Form::getGradeExecute()const{
    return _gradeExecute;
}

bool Form::getIsSigned()const{
    return _isSigned;
}

std::ostream& operator<<(std::ostream& os, const Form& form) {
    os << "name: " << form.getName() << std::endl;
    os << "ifSigned: " << form.getIsSigned() << std::endl;
    os << "gradeExecute: " << form.getGradeExecute() << std::endl;
    os << "gradeSigned: " << form.getSignedGrade() << std::endl;
    return os;
}

const char *Form::GradeTooHightException::what( void ) const throw() {
    return "Form_GradeTooHigh";
}

const char *Form::GradeTooLowException::what( void ) const throw() {
    return "Form_GradeTooLow";
}