#include "Form.hpp"

Form::Form(/* args */) : _name(""), _gradeExecute(0), _gradeSign(0), _ifSigned(false)
{
}

Form::Form(const Form & form) : _name(form.getName()), _gradeSign(form.getSign()), _gradeExecute(form.getExecute()), _ifSigned(false)
{
}
Form &Form::operator=( const Form& form )
{
     const_cast<std::string &>(_name) = form.getName();
    _ifSigned = form.getIfSigned();
    const_cast<int &>(_gradeSign) = form.getGradeSigned();
    const_cast<int &>(_gradeExecute) = form.getGradeExecute();
    return *this;
}

std::string getName(){return this._name; }
const int getExecute(){ return this._gradeExecute;}
const int get

Form::~Form()
{
}
