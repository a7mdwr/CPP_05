#ifndef ROBOTMYREQUESTFORM_HPP
#define ROBOTMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotMyRequestForm : public AForm{
    private:
        std::string _target;
    public:
        RobotMyRequestForm();
        ~RobotMyRequestForm();
        RobotMyRequestForm(const RobotMyRequestForm &src);
        RobotMyRequestForm(const std::string &target);
        RobotMyRequestForm &operator=(const RobotMyRequestForm &Or);
};

#endif