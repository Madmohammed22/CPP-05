#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{

    Bureaucrat bureaucrat;
    AForm form;
    bureaucrat.setGrade(0);
    try
    {
        form.beSigned(bureaucrat);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
        bureaucrat.signForm();
        return 1;
    }
    bureaucrat.signForm();
    std::cout << form << std::endl;
    return 0;
}