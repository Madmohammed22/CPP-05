#include "Bureaucrat.hpp"

// int devision(int number1, int number2){
//     if (number2 == 0)
//         throw std::runtime_error("Error");
//     return number1 / number2;
// }

// int main__(){
//     std::string str = "hello";
//     try {
//         std::cout << str.at(1) << std::endl;
//     }
//     catch (const std::exception& e){
//         std::cerr << e.what() << "" << '\n';
//     }
//     try
//     {
//         int n1 = 3;
//         int n2 = 0;
//         int reuslt = devision(n1, n2);
//         std::cout << reuslt << std::endl;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() <<std::endl;
//     }
//     std::cout << 1 << std::endl; /* after a handler complete control flows
//                                 to the first statement after the last handler in the sequence. */
//     std::cout << 2 << std::endl;

//     return 0;
// }

int main()
{

    Bureaucrat bureaucrat;
    bureaucrat.setGrade(150);
    try
    {
        // bureaucrat.decrementGrade();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        return 1;
    }
    
    std::cout << bureaucrat << std::endl;
    return 0;
}