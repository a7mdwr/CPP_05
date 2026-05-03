#include "RobotomyRequestForm.hpp"

RobotMyRequestForm::RobotMyRequestForm() {}

RobotMyRequestForm::~RobotMyRequestForm() {}

RobotMyRequestForm::RobotMyRequestForm(const RobotMyRequestForm &src) :
AForm(src), _target(src._target) 
{
    *this = src;
}

RobotMyRequestForm::RobotMyRequestForm(const std::string &target) :
AForm("RobotMyRequestForm", 72, 45), _target(target) 
{

}

RobotMyRequestForm &RobotMyRequestForm::operator=(const RobotMyRequestForm &Or){
    if (this != &Or){
        this->_target = Or._target;
    }
    return *this;
}