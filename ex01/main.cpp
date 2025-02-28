/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewu <ewu@student.42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 12:15:31 by ewu               #+#    #+#             */
/*   Updated: 2025/02/28 15:49:46 by ewu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat Eins("Good_P", 0);
		std::cout << Eins << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Fail to create instance!\n";
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat T("GoP", 1);
		std::cout << T << std::endl;
		T.decrementGrade();
		std::cout << T << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Fail to create instance!\n";
		std::cerr << e.what() << std::endl;
	}
	Bureaucrat Normal("Normal", 15);
	std::cout << Normal << std::endl;
	Normal.decrementGrade();
	std::cout << Normal << std::endl;
	Bureaucrat TooBad("Too_Bad", 150);
	std::cout << TooBad << '\n';
	TooBad.incrementGrade();
	std::cout << TooBad << '\n';
	
	Bureaucrat B("B", 1);
	std::cout << B << '\n';
	try
	{
		B.incrementGrade();
	}
	catch(Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << "Incrementing of " << B.getName() << " failed!\n" << e.what() << std::endl;
	}
	std::cout << B << '\n';
	
	Bureaucrat Cod("Cod", 150);
	std::cout << Cod << '\n';
	try
	{
		Cod.decrementGrade();
	}
	catch(Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << "Decrementing of " << Cod.getName() << " failed!\n" << e.what() << '\n';
	}
	std::cout << Cod << '\n';
	return 0;
}
