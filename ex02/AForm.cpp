#include "AForm.hpp"

AForm::AForm() : _gradeToSign(0), _gradeToExecute(0) {} 

AForm::AForm(const std::string name, int gradeToSign, int gradeToExecute) : 
    _name(name), 
    _Signed(false), 
    _gradeToSign(gradeToSign), 
    _gradeToExecute(gradeToExecute) 
{
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw AForm::GradeTooHighExcption();
    if (gradeToSign > 150 || gradeToExecute > 150)
        throw AForm::GradeTooLowExcption();
}

AForm::~AForm(){}

AForm::AForm(const AForm &src) : 
    _name(src._name), 
    _gradeToSign(src._gradeToSign), 
    _gradeToExecute(src._gradeToExecute)
{
    this->_Signed = src._Signed;
}

const std::string AForm::getName() const {
    return _name;
}

int AForm::getGradeToSign()const {
    return _gradeToSign;
}

int AForm::getGradeToExecute() const {
    return _gradeToExecute;
}

AForm &AForm::operator=(const AForm &Or){
    if (this != &Or)
        _Signed = Or._Signed;
    return(*this);
}

const char *AForm::GradeTooHighExcption::what() const throw(){
    return ("Grade is too high\n");
}

const char *AForm::GradeTooLowExcption::what() const throw(){
    return ("Grade is too low\n");
}

bool AForm::getSign() const{
    return this->_Signed;
}

void AForm::beSigned(const Bureaucrat &b){
    if (b.getGrade() <= _gradeToSign){
        if (_Signed == true)
            std::cout << "Form " << _name << " is already signed!" << std::endl;
        else{
            _Signed = true;
            std::cout << "The grade has been signed" << std::endl;
        }
    }
    else if (b.getGrade() > _gradeToSign)
        throw AForm::GradeTooLowExcption();
}

std::ostream &operator<<(std::ostream &out, const AForm &F)
{
    out << "Form: " << F.getName() << std::endl;
    out << "Grade to sign: " << F.getGradeToSign() << std::endl;
    out << "Grade to execute: " << F.getGradeToExecute() << std::endl;
    out << "Status: ";

    if (F.getSign() == true){
        out << "signed";
    }
    else{
        out << "not signed";
    }
    return out;
}