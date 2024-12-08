#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form
{
public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(std::string name, int gradeSign, int gradExecute);
    ShrubberyCreationForm(std::string file_target);
    ShrubberyCreationForm(const ShrubberyCreationForm &s);
    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &other);
    ~ShrubberyCreationForm();

private:
    const std::string name;
    bool checkIfSigned;
    const int gradeSign;
    const int gradExecute;
    std::string file_target;

public:
    virtual void beSigned(Bureaucrat &bureaucrat);
    void execute(Bureaucrat const &executor) const;
    bool FormUp1(Bureaucrat &bureaucrat);
};
#endif