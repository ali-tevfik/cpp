#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP


/*• ShrubberyCreationForm: Required grades: sign 145, exec 137
Create a file <target>_shrubbery in the working directory, and writes ASCII trees
inside it.*/
#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm
{
private:
    std::string _target;
    static const int _sign = 14;
    static const int _exec = 137;
public:
    ShrubberyCreationForm(/* args */);
    ShrubberyCreationForm(const std::string & target);
    ShrubberyCreationForm(const ShrubberyCreationForm & presidantialpardonform);
    ~ShrubberyCreationForm();
    ShrubberyCreationForm &operator=(const ShrubberyCreationForm& ShrubberyCreationForm);

    const std::string& getTarget()const;
    void execute(Bureaucrat const& executor) const;
};




#endif