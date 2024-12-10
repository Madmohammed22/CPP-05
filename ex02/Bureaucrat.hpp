#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
// #include "Form.hpp"

class Bureaucrat
{
public:
    Bureaucrat();
    Bureaucrat(std::string bureaucrat, int grade);
    Bureaucrat(const Bureaucrat &b);
    Bureaucrat &operator=(const Bureaucrat &other);
    ~Bureaucrat();

public:
    void GradeTooHighException();
    void GradeTooLowException();
    std::string getName() const;
    int getGrade() const;
    void setGrade(int _grade);
    void incrementGrade();
    void decrementGrade();
    std::string writeReason();
    void signForm();
    // void executeForm(Form const &form);

private:
    const std::string name;
    int grade;

public:
    bool gotSigned;
    bool forGradTwoHight;
    bool forGradeTwoLow;
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &b);

#endif