# ifndef BUREAAUCRAT_HPP
#define BUREAAUCRAT_HPP 

#include <iostream>
#include <exception>


#define CYAN	"\033[36m"
#define RESET	"\033[0m"


class Bureaucrat
{
private:
    std::string _name;
    int         _grade;
public:
    Bureaucrat(/* args */);
    Bureaucrat(std::string name, int grade);
    Bureaucrat(Bureaucrat & bureaucrat);
    ~Bureaucrat();
    std::string getName()const;
    int getGrade()const;
    void promotion();
    void demotion();
    class GradeTooHighException : public std::exception
    {
        public:
            virtual const char *what() const throw();
    };
    class GradeTooLowException : public std::exception{
        public:
            virtual const char *what() const throw();
    };

};



std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat);

#endif