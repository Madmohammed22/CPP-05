#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm
{
public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(std::string file_target);
    ShrubberyCreationForm(const ShrubberyCreationForm& s);
    ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);
    ~ShrubberyCreationForm();
private:
    const std::string name;
    bool checkIfSigned;
    const int gradeSign;
    const int gradExecute;
    std::string file_target;

};
#endif