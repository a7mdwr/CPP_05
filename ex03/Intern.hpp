#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include <string>

class Intern{
    private:
        AForm *createSB(const std::string &target);
        AForm *createRB(const std::string &target);
        AForm *createPD(const std::string &target);

    public:
        Intern();
	    Intern(const Intern &src);
	    Intern &operator=(const Intern &Or);
	    ~Intern();

	    AForm	*makeForm(std::string name, std::string target);
};

#endif