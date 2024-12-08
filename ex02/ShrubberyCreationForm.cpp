#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : name("Shrubbery"), checkIfSigned(false), gradeSign(145), gradExecute(137)
{
    std::cout << "[ShrubberyCreationForm] Default construct is called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string name, int gradeSign, int gradExecute)
    : name(name), gradeSign(gradeSign), gradExecute(gradExecute)
{
    std::cout << "Parameterize constructor is called." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string file_target)
    : name("Shrubbery"), checkIfSigned(false), gradeSign(145), gradExecute(137), file_target(file_target)
{
    std::string name = file_target + "_shrubbery";
    
    std::ofstream file(name.c_str());
    file << "              v .   ._, |_  ., \n"
            "           `-._  .  /    |/_ \n"
            "               ||_ y | / \n"
            "        __.___||, / -.| \n"
            "           7-,--._||  / / , \n"
            "          /'     `-. `./ / |/_. \n"
            "                    |    |// \n"
            "                    |_    / \n"
            "                    |-   | \n"
            "                    |   =| \n"
            "                    |    | \n"
            "--------------------/ ,  . -------\";\n";
    std::cout << "Parameterize constructor is called." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &s)
    : Form::Form(s), name(s.name), checkIfSigned(s.checkIfSigned), gradeSign(s.gradeSign), gradExecute(s.gradExecute)
{
    std::cout << "[ShrubberyCreationForm] Copy constructor is called" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
    if (this == &other)
        return *this;
    this->checkIfSigned = other.checkIfSigned;
    std::cout << "[ShrubberyCreationForm] Assignment operator is called" << std::endl;

    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "[ShrubberyCreationForm] Distructor is called" << std::endl;
}

bool ShrubberyCreationForm::FormUp1(Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() < 1)
    {
        bureaucrat.forGradTwoHight = true;
        GradeTooHighException();
    }
    else if (bureaucrat.getGrade() > 150)
    {
        bureaucrat.forGradeTwoLow = true;
        GradeTooLowException();
    }

    if ((bureaucrat.getGrade() <= this->gradeSign) && bureaucrat.getGrade() <= this->gradExecute)
    {
        return true;
    }
    bureaucrat.forGradTwoHight = true;
    return false;
}

void ShrubberyCreationForm::beSigned(Bureaucrat &bureaucrat)
{
    if (FormUp1(bureaucrat) == true)
        bureaucrat.gotSigned = true;
    this->checkIfSigned = true;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    if (!executor.gotSigned == true)
        return;
}
