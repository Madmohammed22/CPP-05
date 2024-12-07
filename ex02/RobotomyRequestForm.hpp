#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
#include "AForm.hpp"

class RobotomyRequestForm : public AForm
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