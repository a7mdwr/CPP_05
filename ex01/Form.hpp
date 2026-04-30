#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>

class Form{
    private:
        const std::string _name;
        bool _isSigned;
        const int _gradeToSign;
        const int _gradeToExecute;
    public:
        Form();
        ~Form();
        Form(const Form &src);
        Form &operator=(const Form &Or);

};

#endif