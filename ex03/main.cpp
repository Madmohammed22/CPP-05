#include "Intern.hpp"

int main()
{
    {
        Intern someRandomIntern;
        Form *rrf;
        rrf = someRandomIntern.makeForm("robotomy request", "Bender");
        if (rrf)
            std:: cout << rrf->getName() << std::endl; 
    }
    return 0;
}
