#include "Bureaucrat.hpp"

int main()
{
    try {
        Bureaucrat ahmad("Ahmad", 200);
        std::cout << ahmad.getName() << " was created." << std::endl;
    }
    catch (std::exception &e) {
        std::cout << "Error: " << e.what() << std::endl;
    }

    try {
        Bureaucrat boss("The Boss", 1);
        std::cout << boss.getName() << " was created." << std::endl;
        
        boss.incrementGrade();
    }
    catch (std::exception &e) {
        std::cout << "Error: " << e.what() << std::endl;
    }
    return 0;
}