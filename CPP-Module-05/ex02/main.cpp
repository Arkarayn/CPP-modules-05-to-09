#include "Bureaucrat.hpp"
#include "AForm.hpp"

int main(void)
{
    std::cout << GREEN "||||||BUREAUCRAT INSTATIATE TESTS||||||\n" RESET << std::endl;

    std::cout << MAGENTA "Trying to create a bureaucrat with a grade of 0:" RESET << std::endl;
    Bureaucrat tooHigh("TooHigh", 0);
    std::cout << MAGENTA "Trying to create a bureaucrat with a grade of 151:" RESET << std::endl;
    Bureaucrat tooLow("TooLow", 151);
    Bureaucrat bureaucrat_0;
    Bureaucrat bureaucrat_1("Jack", 75);

    std::cout << GREEN "\n||||||BUREAUCRAT TESTS||||||\n" RESET << std::endl;
    std::cout << MAGENTA "-----Before Decrement-----" RESET << std::endl;
    std::cout << "Bureaucrat name:" << bureaucrat_0.getName() << std::endl;
    std::cout << "Bureaucrat grade:" GREEN << bureaucrat_0.getGrade() << std::endl;

    std::cout << MAGENTA "-----After Decrement-----" RESET << std::endl;
    bureaucrat_0.decrementGrade();
    std::cout << "Bureaucrat name:" << bureaucrat_0.getName() << std::endl;
    std::cout << "Bureaucrat grade:" GREEN << bureaucrat_0.getGrade() << std::endl;

    std::cout << MAGENTA "-----Before Increment-----" RESET << std::endl;
    std::cout << "Bureaucrat name:" << bureaucrat_1.getName() << std::endl;
    std::cout << "Bureaucrat grade:" GREEN << bureaucrat_1.getGrade() << std::endl;

    std::cout << MAGENTA "-----After Increment-----" RESET << std::endl;
    bureaucrat_1.incrementGrade();
    std::cout << "Bureaucrat name:" << bureaucrat_1.getName() << std::endl;
    std::cout << "Bureaucrat grade:" GREEN << bureaucrat_1.getGrade() << std::endl;

    std::cout << GREEN "\n||||||AForm TESTS||||||\n" RESET << std::endl;

    Bureaucrat bureaucrat_2("Elise", 75);
    Bureaucrat bureaucrat_3("Paul", 150);
    AForm form_0;
    AForm form_1("SomethingNotImportantForm", 80, 80);

    std::cout << MAGENTA "-----Trying to sign-----" RESET << std::endl;
    std::cout << "Form name:" << CYAN << form_1.getName() << RESET << std::endl;
    std::cout << "Form grade to sign:" << YELLOW << form_1.getGradeToSign() << RESET << std::endl;
    std::cout << "Bureaucrat name:" << CYAN << bureaucrat_2.getName() << RESET << std::endl;
    std::cout << "Bureaucrat grade:" << YELLOW << bureaucrat_2.getGrade() << RESET << std::endl;
    bureaucrat_2.signForm(form_1);
    std::cout << MAGENTA "-----Trying to sign-----" RESET << std::endl;
    std::cout << "Form name:" << CYAN << form_1.getName() << RESET << std::endl;
    std::cout << "Form grade to sign:" << YELLOW << form_1.getGradeToSign() << RESET << std::endl;
    std::cout << "Bureaucrat name:" << CYAN << bureaucrat_3.getName() << RESET << std::endl;
    std::cout << "Bureaucrat grade:" << YELLOW << bureaucrat_3.getGrade() << RESET << std::endl;
    bureaucrat_3.signForm(form_1);

    std::cout << GREEN "\n||||||ShrubberyCreationForm TESTS||||||\n" RESET << std::endl;
}