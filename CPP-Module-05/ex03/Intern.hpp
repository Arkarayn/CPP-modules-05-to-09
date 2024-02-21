#pragma once

#include "Bureaucrat.hpp"

class Intern
{
    public:
        Intern();
        virtual ~Intern();

        AForm *makeForm(std::string name, std::string target);

        class FormNotFoundException : public std::exception
        {
            public:
                const char *what() const throw()
                {
                    return (RED "Form not found" RESET);
                }
        };
};