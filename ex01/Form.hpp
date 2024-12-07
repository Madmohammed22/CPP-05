#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
#include "Bureaucrat.hpp"

class AForm
{

public:
    AForm();
    AForm(const AForm &f);
    AForm &operator=(const AForm &other);
    ~AForm();

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
    void beSigned(Bureaucrat &bureaucrat);
};

std::ostream &operator<<(std::ostream &os, const AForm &f);
#endif