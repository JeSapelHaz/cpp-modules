/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 17:47:02 by hbutt             #+#    #+#             */
/*   Updated: 2025/12/15 18:18:23 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), _target("default")
{
    std::cout << "Default constructor of ShrubberyCreationForm called." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
    std::cout << "Constructor of ShrubberyCreationForm for target called." << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "Destructor of ShrubberyCreationForm called." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &other) : AForm("ShrubberyCreationForm", 145, 137), _target(other.getTarget())
{
    *this = other;
    std::cout << "Copy constructor of AForm called." << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
    std::cout << "Copy assignment constructor of ShrubberyCreationForm called.\n";
    if (this == &other)
        return *this;
    return *this;
}

std::string ShrubberyCreationForm::getTarget() const
{
    return _target;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (!this->isSigned()) 
    {
        std::cout << executor.getName() << " couldn't execute " << this->getName() << " because ";
        throw AForm::FormNotSignedException();
    }
    if (executor.getGrade() > this->getGradeToExe()) 
    {   
        std::cout << executor.getName() << " couldn't execute " << this->getName() << " because ";
        throw AForm::GradeTooLowException();
    }
    std::string filename = this->getTarget() + "_shrubbery";
    std::ofstream ofs(filename.c_str()); 
    if (!ofs)
    {
        std::cerr << "Error: cannot create file\n";
        return;
    }
    ofs << "\n" << 
"              _{\\ _{\\{\\/}/}/}__\n"  <<
"            {/{/\\}{/{/\\}(\\}{/\\} _\n" <<
"           {/{/\\}{/{/\\}(_)\\}{/{/\\}  _\n" <<
"        {\\{/(\\}\\}{/{/\\}\\}{/){/\\}\\} /\\\n}" <<
"       {/{/(_)/}{\\{/)\\}{\\(_){/}/}/}/}\n" <<
"      _{\\{/{/{\\{/{/(_)/}/}/}{\\(/}/}/}\n" <<
"     {/{/{\\{\\{\\(/}{\\{\\/}/}{\\}(_){\\/}\\}\n" <<
"     _{\\{/{\\{/(_)\\}/}{/{/{/\\}\\})\\}{/\\}\n" <<
"    {/{/{\\{\\(/}{/{\\{\\{\\/})/}{\\(_)/}/}\\}\n" <<
"     {\\{\\/}(_){\\{\\{\\/}/}(_){\\/}{\\/}/})/}\n" <<
"      {/{\\{\\/}{/{\\{\\{\\/}/}{\\{\\/}/}\\}(_)\n" <<
"     {/{\\{\\/}{/){\\{\\{\\/}/}{\\{\\(/}/}\\}/}\n" <<
"      {/{\\{\\/}(_){\\{\\{\\(/}/}{\\(_)/}/}\\}\n" <<
"        {/({/{\\{/{\\{\\/}(_){\\/}/}\\}/}(\\}\n" <<
"         (_){/{\\/}{\\{\\/}/}{\\{\\)/}/}(_)\n" <<
"           {/{/{\\{\\/}{/{\\{\\{\\(_)/}\n" <<
"            {/{\\{\\{\\/}/}{\\{\\\\}/}\n" <<
"             {){/ {\\/}{\\/} \\}\\}\n" <<
"             (_)  \\.-\'.-/\n" <<
"         __...--- |\'-.-\'| --...__\n" <<
"  _...--\"   .-\'   |\'-.-\'|  \' -.  \"\"--..__\n" <<
"-\"    \' .  . \'    |.\'-._| \'  . .  \'   \n" <<
".  \'-  \'    .--\'  | \'-.\'|    .  \'  . \'\n" <<
"         \' ..     |\'-_.-|\n" <<
" .  \'  .       _.-|-._ -|-._  .  \'  .\n" <<
"             .\'   |\'- .-|   \'.\n" <<
" ..-\'   \' .  \'.   `-._.-´   .\'  \'  - .\n" <<
"  .-\' \'        \'-._______.-\'     \'  .\n" <<
"       .      ~,\n" <<
"   .       .   |\\   .    \' \'-.\n" <<
"   ___________/  \\____________\n" <<
"  /  Why is it, when you want \\\n" <<
" |  something, it is so damn   |\n" <<
" |    much work to get it?     |\n" <<
"  \\___________________________/\n";

    ofs.close();
}