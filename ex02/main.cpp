/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewu <ewu@student.42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 12:15:31 by ewu               #+#    #+#             */
/*   Updated: 2025/03/15 13:32:32 by ewu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	try
	{
		// Bureaucrat kaho("Kahoko", 3);
		// std::cout << kaho << std::endl;
		
		// ShrubberyCreationForm shrub("Yard");
		// kaho.signForm(shrub);
		// kaho.executeForm(shrub);
		
		// RobotomyRequestForm robot("Drone");
		// kaho.signForm(robot);
		// kaho.executeForm(robot);
		
		// PresidentialPardonForm pardon("LUCKY");
		// kaho.signForm(pardon);
		// kaho.executeForm(pardon);
		
		// Bureaucrat sei("Shitara", 148);
		// std::cout << sei << std::endl;
		
		// ShrubberyCreationForm shrub("Yard");
		// sei.signForm(shrub);
		// sei.executeForm(shrub);
		
		// RobotomyRequestForm robot("Drone");
		// sei.signForm(robot);
		// sei.executeForm(robot);
		
		// PresidentialPardonForm pardon("LUCKY");
		// sei.signForm(pardon);
		// sei.executeForm(pardon);
		
		// Bureaucrat ko("Koichi", 72);
		// std::cout << koi << std::endl;
		// ShrubberyCreationForm shrub("Yard");
		// ko.signForm(shrub);
		// ko.executeForm(shrub);
		
		// RobotomyRequestForm robot("Drone");
		// ko.signForm(robot);
		// ko.executeForm(robot);
		
		// PresidentialPardonForm pardon("LUCKY");
		// ko.signForm(pardon);
		// ko.executeForm(pardon);
		
		Bureaucrat ruka("Ruka", 30);
		std::cout << ruka << std::endl;
		
		ShrubberyCreationForm shrub("Yard");
		ruka.signForm(shrub);
		ruka.executeForm(shrub);
		
		RobotomyRequestForm robot("Drone");
		ruka.signForm(robot);
		ruka.executeForm(robot);
		
		PresidentialPardonForm pardon("LUCKY");
		ruka.signForm(pardon);
		ruka.executeForm(pardon);
	}
	catch (std::exception& e)
	{
		std::cerr << "Execption: " << e.what() << '\n';
	}
	return 0;
}
