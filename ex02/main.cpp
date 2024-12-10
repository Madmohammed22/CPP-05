#include "ShrubberyCreationForm.hpp"

int main()
{
    {
        Bureaucrat bureaucrat("bureaucrat", 100);
        Form *form = new ShrubberyCreationForm("home");
        try
        {
            form->beSigned(bureaucrat);
            form->execute(bureaucrat);
            // bureaucrat.executeForm(form);
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        
    }
    return 0;
}