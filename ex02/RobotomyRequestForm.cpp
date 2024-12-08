#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm() : name("Shrubbery"), checkIfSigned(false), gradeSign(72), gradExecute(45)
{
    std::cout << "[RobotomyRequestForm] Default construct is called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string file_target)
    : name("Shrubbery"), checkIfSigned(false), gradeSign(72), gradExecute(45), file_target(file_target)
{
    std::cout << "Parameterize constructor is called." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &s)
    :Form::Form(s), name(s.name), checkIfSigned(s.checkIfSigned), gradeSign(s.gradeSign), gradExecute(s.gradExecute)
{
    std::cout << "[RobotomyRequestForm] Copy constructor is called" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
    if (this == &other)
        return *this;
    this->checkIfSigned = other.checkIfSigned;
    std::cout << "[RobotomyRequestForm] Assignment operator is called" << std::endl;

    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "[RobotomyRequestForm] Distructor is called" << std::endl;
}