#include "Form.hpp"

Form::Form() : _gradeToSign(0), _gradeToExecute(0) {} 

Form::Form(const std::string name, int gradeToSign, int gradeToExecute) : 
    _name(name), 
    _Signed(false), 
    _gradeToSign(gradeToSign), 
    _gradeToExecute(gradeToExecute) 
{
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw Form::GradeTooHighExcption();
    if (gradeToSign > 150 || gradeToExecute > 150)
        throw Form::GradeTooLowExcption();
}

Form::~Form(){}

Form::Form(const Form &src) : 
    _name(src._name), 
    _gradeToSign(src._gradeToSign), 
    _gradeToExecute(src._gradeToExecute)
{
    this->_Signed = src._Signed;
}

const std::string Form::getName() const {
    return _name;
}

int Form::getGradeToSign()const {
    return _gradeToSign;
}

int Form::getGradeToExecute() const {
    return _gradeToExecute;
}

Form &Form::operator=(const Form &Or){
    if (this != &Or)
        _Signed = Or._Signed;
    return(*this);
}
const char *Form::GradeTooHighExcption::what() const throw(){
    return ("Grade is too high\n");
}

const char *Form::GradeTooLowExcption::what() const throw(){
    return ("Grade is too low\n");
}

bool Form::getSign() const{
    return this->_Signed;
}

void Form::beSigned(const Bureaucrat &b){
    if (b.getGrade() <= _gradeToSign){
        if (_Signed == true)
            std::cout << "Form " << _name << " is already signed!" << std::endl;
        else
            _Signed = true;
    }
    else if (b.getGrade() > _gradeToSign)
        throw Form::GradeTooLowExcption();
}

std::ostream &operator<<(std::ostream &out, const Form &F)
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

