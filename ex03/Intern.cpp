#include "Intern.hpp"

Intern::Intern()
{
}

Intern::~Intern()
{
}

Intern::Intern(const Intern &src)
{
	*this = src;
}

Intern	&Intern::operator=(const Intern &Or)
{
	(void)Or;
	return (*this);
}

AForm *Intern::createSB(const std::string &target)
{
	std::cout << "intern creates ShrubberyCreationForm\n";
    return new ShrubberyCreationForm(target);
}

AForm *Intern::createRB(const std::string &target)
{
	std::cout << "intern creates RobotomyRequestForm\n";
    return new RobotomyRequestForm(target);
}

AForm *Intern::createPD(const std::string &target)
{
	std::cout << "intern creates PresidentialPardonForm\n";
    return new PresidentialPardonForm(target);
}

AForm *Intern::makeForm(std::string name, std::string target)
{
    AForm *form = NULL;
	
	AForm*(Intern::*funcPtr[])(const std::string &) = {
		&Intern::createPD,
		&Intern::createRB,
		&Intern::createSB
	};

	std::string names[] = {
		"presidential pardon", "robotomy request", "shrubbery creation"
	};
	
	for (int i = 0; i < 3; i++)
	{
		if (names[i] == name)
			return (this->*(funcPtr[i]))(target);
	}
	std::cout << "Error Unknown form name" << std::endl;

    return form;
}