/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewu <ewu@student.42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 12:59:03 by ewu               #+#    #+#             */
/*   Updated: 2025/03/15 13:54:41 by ewu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

//sign 25 exec 5
PresidentialPardonForm::PresidentialPardonForm(const std::string& target)
	: AForm("PresidentialPardonForm", 25, 5, target)
{
	//std::cout << "President default constructor called!\n";
}
PresidentialPardonForm::~PresidentialPardonForm()
{
	//std::cout << "President destructor called!\n";
}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other)
	: AForm(other)
{
	//std::cout << "President copy called!\n";
}
PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other)
{
	(void)other;
	return *this;
}

void PresidentialPardonForm::_doExec() const
{
	std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox.\n";
}
