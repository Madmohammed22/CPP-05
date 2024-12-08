#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
#include "Form.hpp"

class RobotomyRequestForm : public Form
{

public:
    RobotomyRequestForm();
    RobotomyRequestForm(std::string file_target);
    RobotomyRequestForm(const RobotomyRequestForm &s);
    RobotomyRequestForm &operator=(const RobotomyRequestForm &other);
    ~RobotomyRequestForm();

private:
    const std::string name;
    bool checkIfSigned;
    const int gradeSign;
    const int gradExecute;
    std::string file_target;
};

#endif