#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <cstdlib>

class RobotomyRequestForm : public AForm{
    private:
        std::string _target;
        void robotomize() const;

    public:
        RobotomyRequestForm();
        ~RobotomyRequestForm();
        RobotomyRequestForm(const RobotomyRequestForm &src);
        RobotomyRequestForm(const std::string &target);
        RobotomyRequestForm &operator=(const RobotomyRequestForm &Or);

        void execute(const Bureaucrat &e) const;
};

#endif