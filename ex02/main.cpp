#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    {
        Bureaucrat bureaucrat("bureaucrat", 101);
        try
        {
            bureaucrat.decrementGrade();
            bureaucrat.signForm();
        }
        catch (const std::exception &e)
        {
            std::cerr << e.what() << '\n';
            bureaucrat.signForm();
            return 1;
        }
    }

    std::cout << "---------------" << std::endl;
    {
        Bureaucrat bureaucrat("bureaucrat", 100);
        try
        {
            bureaucrat.signForm();
        }
        catch (const std::exception &e)
        {
            std::cerr << e.what() << '\n';
            bureaucrat.signForm();
            return 1;
        }
    }
    return 0;
}