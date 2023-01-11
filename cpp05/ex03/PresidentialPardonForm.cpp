#include "PresidentialPardonForm.hpp"


/*PresidentialPardonForm: Required grades: sign 25, exec 5
Informs that <target> has been pardoned by Zaphod Beeblebrox.*/


PresidentialPardonForm::PresidentialPardonForm(/* args */)
{
}
PresidentialPardonForm::PresidentialPardonForm(const std::string & target) : AForm("PresidentialPardonForm", _sign, _exec)
{
    _target = target;
}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & presidentialpardonform)
{
    *this = presidentialpardonform;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm& presidentialpardonform){
     _target = presidentialpardonform.getTarget();
     return *this;
}
PresidentialPardonForm::~PresidentialPardonForm()
{
}


const std::string & PresidentialPardonForm::getTarget() const {return _target;}

void PresidentialPardonForm::execute(Bureaucrat const & executer) const {
    execute_base(executer);
	std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
