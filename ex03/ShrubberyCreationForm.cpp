#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) :
AForm("ShrubberyCreation Form", 145, 137), _target(target)
{

}


ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) : 
AForm(src), _target(src._target)
{
	*this = src;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &Or)
{
    if (this != &Or){
        this->_target = Or._target;
    }
    return *this;
}

void ShrubberyCreationForm::createShrubbery() const{
    std::string filename = _target + "_shrubbery";
    std::ofstream outfile(filename.c_str());

    if (outfile){
        outfile << "          _  _          _  _" << std::endl;
        outfile << "        (      )      (      )" << std::endl;
        outfile << "      (          )  (          )" << std::endl;
        outfile << "     (____________)(____________)" << std::endl;
        outfile << "          |  |          |  |" << std::endl;
        outfile << "          |  |          |  |" << std::endl;
        outfile << "      ____|__|__________|__|____" << std::endl;
        outfile.close();
        std::cout << "Shrubbery created: " << filename << std::endl;
    }
    else
        std::cout << "canot creat shrubbery" << std::endl;
}

void ShrubberyCreationForm::execute(const Bureaucrat &e) const {
    if (e.getGrade() > AForm::getGradeToExecute())
        throw AForm::GradeTooLowExcption();
    else
        createShrubbery();
}