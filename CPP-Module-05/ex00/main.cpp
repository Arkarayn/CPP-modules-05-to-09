#include "Bureaucrat.hpp"

int main(void)
{
    Bureaucrat bureaucrat_1;

    Bureaucrat bureaucrat_2("Napoli", 10);
    bureaucrat_1.IncrementGrade(10);
    std::cout << "Bureaucrat (1) name:" << bureaucrat_1.getName() << std::endl;
    std::cout << "Bureaucrat (1) grade:" << bureaucrat_1.getGrade() << std::endl;

    std::cout << "Bureaucrat (2) name:" << bureaucrat_2.getName() << std::endl;
    std::cout << "Bureaucrat (2) grade:" << bureaucrat_2.getGrade() << std::endl;
}