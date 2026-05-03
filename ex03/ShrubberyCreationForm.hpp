#ifndef SHRUBBERYCREATIONFORM
#define SHRUBBERYCREATIONFORM

#include <cstdlib>
#include <fstream>
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm{
    private:
        std::string _target;
        void createShrubbery() const;
    
        public:
            ShrubberyCreationForm();
            ~ShrubberyCreationForm();
            ShrubberyCreationForm(const ShrubberyCreationForm &src);
            ShrubberyCreationForm &operator=(const ShrubberyCreationForm &Or);

            void execute(const Bureaucrat &e) const;
            ShrubberyCreationForm(const std::string &target);
};

#endif