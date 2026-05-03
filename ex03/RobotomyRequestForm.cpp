#include "RobotomyRequestForm.hpp"
#define ROBOTOMYREQUESTFORM_HPP

RobotomyRequestForm::RobotomyRequestForm() {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) :
AForm(src), _target(src._target) 
{
    *this = src;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) :
AForm("RobotoMyRequest Form", 72, 45), _target(target) 
{

}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &Or){
    if (this != &Or){
        this->_target = Or._target;
    }
    return *this;
}

void RobotomyRequestForm::robotomize() const{
    std::cout << "BZZZZZZZZ... Drilling noises!" << std::endl;

    srand(time(NULL));
    int success = rand() % 2;
    if (success)
        std::cout << _target << " has been robotomized successfully!" << std::endl;
    else
        std::cout << "The robotomy failed on " << _target << std::endl;
}

 void RobotomyRequestForm::execute(const Bureaucrat &e) const {
    if (e.getGrade() >= AForm::getGradeToSign()){
        throw GradeTooLowExcption();
    }
    else
        robotomize();
 }