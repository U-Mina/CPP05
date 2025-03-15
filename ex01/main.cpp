/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewu <ewu@student.42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 12:15:31 by ewu               #+#    #+#             */
/*   Updated: 2025/03/01 21:18:23 by ewu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{
		Bureaucrat Ken("KEN", 9);
		Form tariff("Tariff_Form", 15, 25);
		std::cout << Ken << std::endl;
		std::cout << tariff << std::endl;
		Ken.signForm(tariff);
		tariff.beSigned(Ken);
		std::cout << tariff << std::endl;

		Bureaucrat Jo("JOJO", 55);
		tariff.beSigned(Jo);
		Jo.signForm(tariff);
	}
	catch (std::exception& e)
	{
		std::cerr << "Sign of form failed because of Exception: " << e.what() << '\n';
	}
	return 0;
}
