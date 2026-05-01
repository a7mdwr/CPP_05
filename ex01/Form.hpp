#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;
class Form{
    private:
        const std::string _name;
        bool _Signed;
        const int _gradeToSign;
        const int _gradeToExecute;
    public:
        class GradeTooHighExcption : public std::exception{
            const char *what() const throw();
        };

        class GradeTooLowExcption : public std::exception{
            const char *what() const throw();
        };

        Form();
        ~Form();
        Form(const Form &src);
        Form &operator=(const Form &Or);
        Form(const std::string name, int gradeToSign, int gradeToExecute);

        const std::string getName() const;
        void beSigned(const Bureaucrat &b);
        bool getSign() const;
        int getGradeToSign() const ;
        int getGradeToExecute() const ;

};

std::ostream &operator<<(std::ostream &out, const Form &F);

#endif