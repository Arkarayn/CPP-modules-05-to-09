#include "Bureaucrat.hpp"

int main(void)
{
    Bureaucrat bureaucrat_1;

    Bureaucrat("Hermes", 10);
    std::cout << "Bureaucrat name:" << bureaucrat_1.getName() << std::endl;
    std::cout << "Bureaucrat grade:" << bureaucrat_1.getGrade() << std::endl;
}