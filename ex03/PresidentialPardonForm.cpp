#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(){}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) :
AForm(src), _target(src._target)
{

}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) :
AForm("PresidentialPardon Form", 25, 5), _target(target)
{

}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &Or){
    if (this != &Or){
        this->_target = Or._target;
    }
    return (*this);
}

void PresidentialPardonForm::pardon() const {
    std::cout << _target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

void PresidentialPardonForm::execute(const Bureaucrat &e) const {
    if (e.getGrade() >= AForm::getGradeToSign()){
        throw GradeTooLowExcption();
    }
    else
        pardon();
}