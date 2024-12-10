#include "ShrubberyCreationForm.hpp"

int main()
{
    {
        Bureaucrat bureaucrat("bureaucrat", 146);
        Form *form = new ShrubberyCreationForm("Shrubbery");
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