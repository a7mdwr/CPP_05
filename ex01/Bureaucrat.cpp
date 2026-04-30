#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){}

Bureaucrat::~Bureaucrat(){}

Bureaucrat::Bureaucrat(const Bureaucrat &src){
	*this = src;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name)
{
	if(grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	_grade = grade;
} 

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &Or)
{   
    if (this != &Or) {
	_grade = Or._grade; // this = *obj, *this = obj, src = obj, &src = *obj
    }
	return (*this);
}

const char *Bureaucrat::GradeTooHighException::what() const throw(){
    return ("Grade is too high\n");
}

const char *Bureaucrat::GradeTooLowException::what() const throw(){
    return ("Grade is too low\n");
}

int Bureaucrat::getGrade() const{
    return _grade;
}

const std::string Bureaucrat::getName() const{
    return _name;
}

void Bureaucrat::incrementGrade(){
    if (_grade - 1 < 1)
        throw GradeTooHighException();
    _grade--;
}

void Bureaucrat::decrementGrade(){
    if (_grade + 1 > 150)
        throw GradeTooLowException();
    _grade++;
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &B)
{
	out << B.getName() << " bureaucrat grade is " << B.getGrade();
    return out;
}