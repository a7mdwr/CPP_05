#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    std::cout << "--- Boundary Test: Exact Grade ---" << std::endl;
    try {
    
        Bureaucrat boss("The Boss", 1); 
        Bureaucrat intern("The Intern", 150);

        Form ultraSecret("Ultra Secret", 1, 1);
        
        std::cout << intern << std::endl;
        intern.signForm(ultraSecret);
        
        std::cout << std::endl << boss << std::endl;
        boss.signForm(ultraSecret);
        
        std::cout << std::endl << ultraSecret << std::endl;
    } catch (std::exception &e) {
        std::cout << "Unexpected Error: " << e.what() << std::endl;
    }

    return 0;
}