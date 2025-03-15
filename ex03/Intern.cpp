/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewu <ewu@student.42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 14:13:24 by ewu               #+#    #+#             */
/*   Updated: 2025/03/15 14:48:56 by ewu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {}
Intern::~Intern() {}
Intern::Intern(const Intern& other)
{
	(void)other;//check
}
Intern& Intern::operator=(const Intern& other)
{
	(void)other;
	return *this;
}
AForm* Intern::makeForm(const std::string& formName, const std::string& formTarget)
{
	//create a struct include formName and correspond make*** ft
	struct forms
	{
		std::string names;
		AForm* (*_create)(const std::string& formTarget);//this _create() ft points to makeShrubbery/Robot/President
	};
	//array of 'forms' struct
	const forms create_forms[] = {
		{"shrubbery creation", &Intern::makeShrubbery},
		{"robotomy request", &Intern::makeRobot},
		{"president pardon", &Intern::makePresident}
	};
	//size of form_type
	int volum = sizeof(create_forms)/sizeof(create_forms[0]);
	for (int i = 0; i < volum; ++i)
	{
		if (create_forms[i].names == formName)//a macth of fornName is found, then create
		{
			AForm* form = create_forms[i]._create(formTarget);
			std::cout << "Intern creates " << form->getName() << 
			" at " << form->getTarget() << "\n";
			return form;
		}
	}
	//cant find match after loop through
	std::cout << "Intern fails to create form because " << formName << " is invalid!\n";
	return nullptr;
}

AForm* Intern::makeShrubbery(const std::string& target)
{
	return new ShrubberyCreationForm(target);
}
AForm* Intern::makeRobot(const std::string& target)
{
	return new RobotomyRequestForm(target);
}
AForm* Intern::makePresident(const std::string& target)
{
	return new PresidentialPardonForm(target);
}