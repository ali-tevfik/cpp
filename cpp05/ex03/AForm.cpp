#include "AForm.hpp"

AForm::AForm(/* args */)
{
    _name = "";
    _gradeExecute = 0;
    _gradeSign = 0;
    _isSigned = false;
}
AForm::AForm(const AForm & AForm)
{
    *this = AForm;
}
AForm ::AForm(const std::string & name, int gradeSigned, int gradeExecute)
{
    _name = name;
    _gradeSign = gradeSigned;
    _gradeExecute = gradeExecute;
    _isSigned = false;
    if (_gradeSign < 1 || _gradeExecute < 1)
        throw GradeTooLowException();
    if (_gradeExecute > 150 || _gradeSign > 150)
        throw GradeTooHighException();
}

void AForm::beSigned(const Bureaucrat & bureaucrat){
    if (bureaucrat.getGrade() > getSignedGrade())
        throw Bureaucrat::GradeTooLowException();
    _isSigned = true;
}

AForm::~AForm()
{
}

AForm &AForm::operator=(const AForm & AForm)
{
    _isSigned = AForm.getIsSigned();
    _gradeSign = AForm.getSignedGrade();
    _name = AForm.getName();
    _gradeExecute = AForm.getGradeExecute();
    return *this;
}


std::string AForm::getName()const{
    return _name;
}

int AForm::getSignedGrade()const{
    return _gradeSign;
}

int AForm::getGradeExecute()const{
    return _gradeExecute;
}

bool AForm::getIsSigned()const{
    return _isSigned;
}

std::ostream& operator<<(std::ostream& os, const AForm& AForm) {
    os << "name: " << AForm.getName() << std::endl;
    os << "ifSigned: " << AForm.getIsSigned() << std::endl;
    os << "gradeExecute: " << AForm.getGradeExecute() << std::endl;
    os << "gradeSigned: " << AForm.getSignedGrade() << std::endl;
    return os;
}

const char *AForm::GradeTooHighException::what( void ) const throw() {
    return "AForm_GradeTooHigh";
}

const char *AForm::GradeTooLowException::what( void ) const throw() {
    return "AForm_GradeTooLow";
}
const char *AForm::signedException::what( void ) const throw() {
    return "signedException";
}

void AForm::execute_base(const Bureaucrat& executor) const {
    if (!getIsSigned())
        throw signedException();
    if (executor.getGrade() > getGradeExecute())
        throw GradeTooLowException();
}
