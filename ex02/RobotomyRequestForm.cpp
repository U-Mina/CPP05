/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewu <ewu@student.42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 12:44:16 by ewu               #+#    #+#             */
/*   Updated: 2025/03/15 13:28:03 by ewu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

//sign 72; exe 45
RobotomyRequestForm::RobotomyRequestForm(const std::string& target)
	: AForm("RobotomyRequestForm", 72, 45, target)
{}

RobotomyRequestForm::~RobotomyRequestForm()
{}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other)
	: AForm(other)
{}
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
