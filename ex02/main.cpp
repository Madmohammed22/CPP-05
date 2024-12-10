#include "ShrubberyCreationForm.hpp"

int main()
{
    {
        Form *form = new ShrubberyCreationForm("home");
        Bureaucrat *bureaucrat = new Bureaucrat("Bureaucrat", 147);
        try
        {
            form->beSigned(*bureaucrat);
            bureaucrat->signForm();
            form->execute(*bureaucrat);
            bureaucrat->executeForm(*form);
        }
        catch(const std::exception& e)
        {
            bureaucrat->executeForm(*form);
            std::cerr << e.what() << '\n';
        }
        
    }
    return 0;
}