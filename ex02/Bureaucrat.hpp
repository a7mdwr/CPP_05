#ifndef BUREAUCRAT
#define BUREAUCRAT

#include <iostream>
#include "AForm.hpp"

class AForm;

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
        void signForm(AForm &f);

        const std::string getName() const;
        int getGrade() const;
        void executeForm(AForm const &f);
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &B);

#endif