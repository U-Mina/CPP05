/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewu <ewu@student.42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 12:44:16 by ewu               #+#    #+#             */
/*   Updated: 2025/03/15 13:53:59 by ewu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

//sign 72; exe 45
RobotomyRequestForm::RobotomyRequestForm(const std::string& target)
	: AForm("RobotomyRequestForm", 72, 45, target)
{
	//std::cout << "Robot default constructor called!\n";
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	//std::cout << "Robot destructor called!\n";
}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other)
	: AForm(other)
{
	//std::cout << "Robot copy called!\n";
}
RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
	(void)other;
	return *this;
}

void RobotomyRequestForm::_doExec() const
{
	std::cout << "BUUZZIII!\nDUUUUUUUUUU!\nBANNNNNGGGGGGG!\n";
	int chance = std::rand() % 2;
	if (chance == 0)
		std::cout << getTarget() << " has been robomized successfully!\n";
	else
		std::cout << "Robotomy of " << getTarget() << " failed!\n";
}
