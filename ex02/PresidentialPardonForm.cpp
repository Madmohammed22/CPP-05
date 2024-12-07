#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm() : name("Shrubbery"), checkIfSigned(false), gradeSign(25), gradExecute(5)
{
    std::cout << "[PresidentialPardonForm] Default construct is called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string file_target)
    : name("Shrubbery"), checkIfSigned(false), gradeSign(25), gradExecute(5), file_target(file_target)
{
    std::cout << "Parameterize constructor is called." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &s)
    : name(s.name), checkIfSigned(s.checkIfSigned), gradeSign(s.gradeSign), gradExecute(s.gradExecute)
{
    std::cout << "[PresidentialPardonForm] Copy constructor is called" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
    if (this == &other)
        return *this;
    this->checkIfSigned = other.checkIfSigned;
    std::cout << "[PresidentialPardonForm] Assignment operator is called" << std::endl;

    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "[PresidentialPardonForm] Distructor is called" << std::endl;
}