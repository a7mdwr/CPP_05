#ifndef BUREAUCRAT
#define BUREAUCRAT

#include <string>
#include <iostream>

class Bureaucrat {
    private:
        const std::string _name;
        int _grade;
    public:
        Bureaucrat();
        ~Bureaucrat();
        void getName();
        void getGrade();
};