#include "RobotomyRequestForm.hpp"

/*RobotomyRequestForm: Required grades: sign 72, exec 45
Makes some drilling noises. Then, informs that <target> has been robotomized
successfully 50% of the time. Otherwise, informs that the robotomy failed.*/


RobotomyRequestForm::RobotomyRequestForm(/* args */)
{
}
RobotomyRequestForm::RobotomyRequestForm(const std::string & target) : AForm("RobotomyRequestForm", _sign, _exec)
{
    _target = target;
}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & RobotomyRequestForm)
{
    *this = RobotomyRequestForm;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm& RobotomyRequestForm){
     _target = RobotomyRequestForm.getTarget();
     return *this;
}
RobotomyRequestForm::~RobotomyRequestForm()
{
}


const std::string & RobotomyRequestForm::getTarget() const {return _target;}

void RobotomyRequestForm::execute(Bureaucrat const & executer) const {
    execute_base(executer);
	std::cout << "*DRILLING NOISE*" << std::endl;
    srand(time(nullptr));
    int randombool = rand() % 2;
    if (randombool)
        std::cout << getTarget() << " has been robotomized successfully." << std::endl;
    else    
        std::cout << "robotomy failed." << std::endl;
        
        
}
