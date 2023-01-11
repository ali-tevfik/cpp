#include "ShrubberyCreationForm.hpp"


/*• ShrubberyCreationForm: Required grades: sign 145, exec 137
Create a file <target>_shrubbery in the working directory, and writes ASCII trees
inside it.*/

ShrubberyCreationForm::ShrubberyCreationForm(/* args */)
{
}
ShrubberyCreationForm::ShrubberyCreationForm(const std::string & target) : AForm("ShrubberyCreationForm", _sign, _exec)
{
    _target = target;
}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & ShrubberyCreationForm)
{
    *this = ShrubberyCreationForm;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm& ShrubberyCreationForm){
     _target = ShrubberyCreationForm.getTarget();
     return *this;
}
ShrubberyCreationForm::~ShrubberyCreationForm()
{
}


const std::string & ShrubberyCreationForm::getTarget() const {return _target;}

void ShrubberyCreationForm::execute(Bureaucrat const & executer) const {
   execute_base(executer);
	std::ofstream ostrm(getTarget() + "_shrubery", std::ofstream::out);
	ostrm <<      
"            .        +          .      .          .\n"
"     .            _        .                    .\n"
"  ,              /;-._,-.____        ,-----.__\n"
" ((        .    (_:#::_.:::. `-._   /:, /-._, `._,\n"
"  `                 \\   _|`\"=:_::.`.);  \\ __/ /\n"
"                      ,    `./  \\:. `.   )==-'  .\n"
"    .      ., ,-=-.  ,\\, +#./`   \\:.  / /           .\n"
".           \\/:/`-' , ,\\ '` ` `   ): , /_  -o\n"
"       .    /:+- - + +- : :- + + -:'  /(o-) \\)     .\n"
"  .      ,=':  \\    ` `/` ' , , ,:' `'--\".--\"---._/`7\n"
"   `.   (    \\: \\,-._` ` + '\\, ,\"   _,--._,---\":.__/\n"
"              \\:  `  X` _| _,\\/'   .-'\n"
".               \":._:`\\____  /:'  /      .           .\n"
"                    \\::.  :\\/:'  /              +\n"
"   .                 `.:.  /:'  }      .\n"
"           .           ):_(:;   \\           .\n"
"                      /:. _/ ,  |\n"
"                   . (|::.     ,`                  .\n"
"     .                |::.    {\\\n"
"                      |::.\\  \\ `.\n"
"                      |:::(\\    |\n"
"              O       |:::/{ }  |                  (o\n"
"               )  ___/#\\::`/ (O \"==._____   O, (O  /`\n"
"          ~~~w/w~\"~~,\\` `:/,-(~`\"~~~~~~~~\"~o~\\~/~w|/~\n"
"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";

  	std::cout << "Created Shrubbery file" << std::endl;
  	ostrm.close();
}
