#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    std::cout << "~~~Bureaucrat default constructor called~~~" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
    std::cout << "~~~Bureaucrat constructor called~~~" << std::endl;
    if (this->_grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (this->_grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

void Bureaucrat::IncrementGrade(int grade)
{
    _grade -= grade;
    if(grade < 1)
        throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::DecrementGrade(int grade)
{
    _grade += grade;
    if(grade > 150)
        throw Bureaucrat::GradeTooHighException();
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "~~~Bureaucrat destructor called~~~" << std::endl;
}

std::string Bureaucrat::getName() const
{
    return (this->_name);
}

int Bureaucrat::getGrade() const
{
    return (this->_grade);
}