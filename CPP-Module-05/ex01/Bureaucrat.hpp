#pragma once

#include <iostream>
#include <stdexcept>

#define RED "\033[0;31m"
#define GREEN "\033[0;32m"
#define YELLOW "\033[0;33m"
#define BLUE "\033[0;34m"
#define MAGENTA "\033[0;35m"
#define CYAN "\033[0;36m"
#define WHITE "\033[0;37m"
#define RESET "\033[0m"

class Form;

class Bureaucrat
{
    private:
        const std::string _name;
        int _grade;
    public:
        Bureaucrat();
        Bureaucrat(std::string name, int grade);
        virtual ~Bureaucrat();

        void incrementGrade(void);
        void decrementGrade(void);
        void signForm(Form &form);

        std::string getName() const;
        int getGrade() const;
        
        class GradeTooHighException : public std::exception
        {
            public:
                const char *what() const throw()
                {
                    return (RED "Grade too high" RESET);
                }
        };

        class GradeTooLowException : public std::exception
        {
            public:
                const char *what() const throw()
                {
                    return (RED "Grade too low" RESET);
                }
        };
};

std::ostream& operator<<(std::ostream&, const Bureaucrat&);

void checkGrade(int grade);