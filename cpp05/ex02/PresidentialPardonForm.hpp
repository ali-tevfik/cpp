#ifndef PRESIDANTIALPARDONFORM_HPP
#define PRESIDANTIALPARDONFORM_HPP


/*PresidentialPardonForm: Required grades: sign 25, exec 5
Informs that <target> has been pardoned by Zaphod Beeblebrox.*/
#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
private:
    std::string _target;
    static const int _sign = 25;
    static const int _exec = 5;
public:
    PresidentialPardonForm(/* args */);
    ~PresidentialPardonForm();
    PresidentialPardonForm(const std::string & target);
    PresidentialPardonForm(const PresidentialPardonForm & presidantialpardonform);
    PresidentialPardonForm &operator=(const PresidentialPardonForm& presidantialpardonform);

    const std::string& getTarget()const;
    void execute(Bureaucrat const& executor) const;
};


#endif


//yururluge konmasi icin imzalanmis olmasi lazim
//burukrat imza ve yururluge koyabilir
