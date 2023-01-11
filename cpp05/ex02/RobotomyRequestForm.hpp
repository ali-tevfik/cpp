#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP


/*RobotomyRequestForm: Required grades: sign 72, exec 45
Makes some drilling noises. Then, informs that <target> has been robotomized
successfully 50% of the time. Otherwise, informs that the robotomy failed.*/

#include "AForm.hpp"

class RobotomyRequestForm :public AForm
{
private:
    std::string _target;
    static const int _sign = 72;
    static const int _exec = 45;
public:
    RobotomyRequestForm(/* args */);
    RobotomyRequestForm(const std::string & target);
    RobotomyRequestForm(const RobotomyRequestForm & presidantialpardonform);
    ~RobotomyRequestForm();
    RobotomyRequestForm &operator=(const RobotomyRequestForm& robotomyrequestform);

    const std::string& getTarget()const;
    void execute(Bureaucrat const& executor) const;

};


#endif