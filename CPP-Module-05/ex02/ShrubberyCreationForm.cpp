#include <fstream>
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    try
    {
        if (!this->getSigned())
            throw AForm::FormNotSignedException();
        if (executor.getGrade() > this->getGradeToSign())
            throw AForm::GradeTooLowToSignException();
        if (executor.getGrade() > this->getGradeToExecute())
            throw AForm::GradeTooLowToExecuteException();
        std::ofstream file(this->getTarget() + "_shrubbery");
        if (!file.is_open())
            throw std::runtime_error("Error: could not open file");
        file << "     ,d                                       " << std::endl;
        file << "     88                                       " << std::endl;
        file << "   MM88MMM 8b,dPPYba,  ,adPPYba,  ,adPPYba,   " << std::endl;
        file << "     88    88P'   'Y8 a8P_____88 a8P_____88   " << std::endl;
        file << "     88    88         8PP''''''' 8PP'''''''   " << std::endl;
        file << "     88,   88         '8b,   ,aa '8b,   ,aa   " << std::endl;
        file << "     'Y888 88          `'Ybbd8''  `'Ybbd8''   " << std::endl;
        file.close();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

std::string ShrubberyCreationForm::getTarget() const
{
    return _target;
}

std::string ShrubberyCreationForm::getName() const
{
    return AForm::getName();
}

bool ShrubberyCreationForm::getSigned() const
{
    return AForm::getSigned();
}

int ShrubberyCreationForm::getGradeToSign() const
{
    return AForm::getGradeToSign();
}

int ShrubberyCreationForm::getGradeToExecute() const
{
    return AForm::getGradeToExecute();
}