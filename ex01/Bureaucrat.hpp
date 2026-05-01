#ifndef BUREAUCRAT
#define BUREAUCRAT

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat {
    private:
        const std::string _name;
        int _grade;
    public:
        class GradeTooHighException : public std::exception{
            const char *what() const throw();
        };

        class GradeTooLowException : public std::exception{
		    const char *what() const throw();
	    };

        Bureaucrat();
        Bureaucrat(const Bureaucrat &src);
        Bureaucrat &operator=(const Bureaucrat &Or);
        Bureaucrat(const std::string name, int grade);
        ~Bureaucrat();

        void incrementGrade();
        void decrementGrade();
        void signForm(Form &f);

        const std::string getName() const;
        int getGrade() const;
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &B);

#endif