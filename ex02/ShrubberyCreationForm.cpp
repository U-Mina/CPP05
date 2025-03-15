/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewu <ewu@student.42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 20:39:12 by ewu               #+#    #+#             */
/*   Updated: 2025/03/15 13:37:38 by ewu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

//AForm(const std::string& name, int gradeToSign, int gradeToExcu);
//sign:145 exec:137

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
	: AForm("ShrubberyCreationForm", 145, 137, target)
{
	//std::cout << "ShrubberyCreationForm default constructor called!\n";
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	//std::cout << "ShrubberyCreationForm destructor called!\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other)
	: AForm(other)
{
	//std::cout << "copy called!\n";
}
ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
	return *this;//check
}
void ShrubberyCreationForm::_doExec() const
{
	std::string filename = getTarget() + "_shrubbery";
	std::ofstream result(filename);
	if (result.is_open())
	{
		result << "Shrubbey\n"
			"	 		 _-_	\n"
			"	 /~~      ~~\\\n"
			"  /~~         ~~\\\n"
			" {               }\n"
			" \\  _-     -_  /\n"
			"  ~  \\\\ //  ~\n"
			"_- -   | | _- _\n"
			"  _ -  | |   -_\n"
			"      // \\\\\n";
		result.close();
	}
}
// std::ofstream result(std::string filename = (getTarget() + "_shrubbery").c_str());