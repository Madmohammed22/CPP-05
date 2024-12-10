#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#define RESET   "\033[0m"
#define BLACK   "\033[30m"      
#define RED     "\033[31m"      
#define GREEN   "\033[32m"      
#define YELLOW  "\033[33m"      
#define BLUE    "\033[34m"      
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"      
#define WHITE   "\033[37m"

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