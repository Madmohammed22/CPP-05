#include "AForm.hpp"

AForm::AForm() : name("Bureaucrat"), checkIfSigned(false), gradeSign(1), gradExecute(1)
{
    std::cout << "Default constructor is called" << std::endl;
}

AForm::AForm(const AForm &f) : name(f.name), gradeSign(f.gradeSign), gradExecute(f.gradExecute)
{
    std::cout << "Copy constructor is called" << std::endl;
}

AForm &AForm::operator=(const AForm &other)
{
    if (this == &other)
        return *this;
    std::cout << "Assignment operator is called" << std::endl;
    return *this;
}

AForm::~AForm()
{
    std::cout << "Distructor is called" << std::endl;
}

std::string AForm::getName() const{
    return this->name;
}

bool AForm::getCheckIfSigned() const{
    return this->checkIfSigned;
}
int AForm::getGradeSign() const{
    return this->gradeSign;
}

int AForm::getGradExecute() const{
    return this->gradExecute;
}


std::ostream &operator<<(std::ostream &os, const AForm& f)
{
    os << f.getName() << " " << f.getCheckIfSigned()
        << " " << f.getGradeSign()
        << " " << f.getGradExecute();
    return os;
}

void AForm::GradeTooHighException()
{
    throw std::runtime_error("[ERROR] Grade Too High");
}

void AForm::GradeTooLowException()
{
    throw std::runtime_error("[ERROR] Grade Too Low");
}

void AForm::beSigned(Bureaucrat& bureaucrat){
    if (bureaucrat.getGrade() < 1){
        bureaucrat.forGradTwoHight = true;
        GradeTooHighException();
    }
    if (bureaucrat.getGrade() > 150){
        bureaucrat.forGradeTwoLow = true;
        GradeTooLowException();
    }
    bureaucrat.gotSigned = true;

    this->checkIfSigned = true;
}
