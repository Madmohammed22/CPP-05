#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
public:
    Bureaucrat();
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

private:
    const std::string name;
    int grade;
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat& b);

#endif