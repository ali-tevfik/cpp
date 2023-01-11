#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include <exception>
#include "AForm.hpp"

class Form;

class Intern {

    public:
        Intern( void );
        Intern ( const Intern& intern );
        Intern &operator=( const Intern& intern );
        virtual ~Intern ( void );

        AForm *makeForm( const std::string& name, const std::string& target);

        class FormDoesNotExistException : public std::exception {
            public:
                virtual const char *what() const throw();
        };
};

#endif
