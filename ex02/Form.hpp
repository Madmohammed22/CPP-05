#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
#include "Bureaucrat.hpp"

class Form
{

public:
    Form();
    Form(std::string name, bool checkIfSigned
        , int gradeSign, int gradExecute);
    Form(const Form &f);
    Form &operator=(const Form &other);
    virtual ~Form();

private:
    const std::string name;
    bool checkIfSigned;
    const int gradeSign;
    const int gradExecute;

public:
    std::string getName() const;
    bool getCheckIfSigned() const;
    int getGradeSign() const;
    int getGradExecute() const;
    void GradeTooHighException();
    void GradeTooLowException();
    virtual bool FormUp(Bureaucrat &bureaucrat);
    virtual void beSigned(Bureaucrat &bureaucrat);
    virtual void execute(Bureaucrat const & executor) const = 0;
};

std::ostream &operator<<(std::ostream &os, const Form &f);
#endif