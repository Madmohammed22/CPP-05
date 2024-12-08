#include "ShrubberyCreationForm.hpp"

int main()
{
    {
        Form *form = new ShrubberyCreationForm("Shrubbery");
        std::cout << form->getName() << std::endl;
        // Bureaucrat bureaucra("bureaucra", 10);
        // try
        // {
        //     // form->beSigned(bureaucra);
        //     // form->execute(bureaucra);
        // }
        // catch (const std::exception &e)
        // {
        //     std::cerr << e.what() << '\n';
        // }
    }
    return 0;
}