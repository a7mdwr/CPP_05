#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main()
{
    Intern intern;
	Bureaucrat all("hiii", 150);

    AForm *shrubberyForm = intern.makeForm("shrubbery creation", "garden");
    AForm *robotomyForm = intern.makeForm("robotomy request", "John Doe");
    AForm *presidentialForm = intern.makeForm("presidential pardon", "Alice");

	// (void)robotomyForm;
	// (void)shrubberyForm;
	// (void)presidentialForm;
	// try
	// {
	// 	shrubberyForm->execute(all);
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }
	
    delete shrubberyForm;
    delete robotomyForm;
    delete presidentialForm;

    return 0;
}