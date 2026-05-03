#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
    Bureaucrat Ahmad("Ahmad", 1);

    ShrubberyCreationForm shrubberyForm("garden");
    // RobotomyRequestForm robotomyForm("Ahmad");
    // PresidentialPardonForm presidentialForm("Alice");

    Ahmad.signForm(shrubberyForm);
    // Ahmad.signForm(robotomyForm);
    // Ahmad.signForm(presidentialForm);

    Ahmad.executeForm(shrubberyForm);
    // Ahmad.executeForm(robotomyForm);
    // Ahmad.executeForm(presidentialForm);

    return 0;
}