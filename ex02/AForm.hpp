#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;
class AForm{
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

        AForm();
        virtual ~AForm();
        AForm(const AForm &src);
        AForm &operator=(const AForm &Or);
        AForm(const std::string name, int gradeToSign, int gradeToExecute);

        const std::string getName() const;
        void beSigned(const Bureaucrat &b);
        bool getSign() const;
        int getGradeToSign() const ;
        int getGradeToExecute() const ;

        virtual void execute(Bureaucrat const & executor) const = 0;
};

std::ostream &operator<<(std::ostream &out, const AForm &F);

#endif