/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewu <ewu@student.42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 14:40:18 by ewu               #+#    #+#             */
/*   Updated: 2025/03/15 15:00:01 by ewu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int main()
{
	Intern  someRandomIntern;
    AForm*   rrf;
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	if (rrf)
		delete rrf;
	
	Intern greenhand;
	AForm * s;
	s = greenhand.makeForm("shrubbery creation", "Castle");
	if (s)
		delete s;
		
	AForm* c;
	c = greenhand.makeForm("president pardon", "Office");
	if (c)
		delete c;
	
	AForm* n;
	n = greenhand.makeForm("NON-EXIST Form", "42");
	if (n)
		delete n;
	return (0);
}
