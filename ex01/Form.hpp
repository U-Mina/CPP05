/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewu <ewu@student.42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 15:53:02 by ewu               #+#    #+#             */
/*   Updated: 2025/03/01 21:19:23 by ewu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"
// class Bureaucrat;

class Form
{
private:
	bool _signed;
	const int _gradeToSign;
	const int _gradeToExcu;
	const std::string _name;
	
public:
	Form(const std::string& name, int gradeToSign, int gradeToExcu);
	// Form(const Form& other);
	// Form& operator=(const Form& other);
	~Form();
	class GradeTooHighException : public std::exception
	{
	public:
		const char* what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
	public:
		const char* what() const throw();	
	};
	
	const std::string& getName() const;
	bool getIsSigned() const;
	int getGradeToSign() const;
	int getGradeToExcu() const;
	
	void beSigned(const Bureaucrat& bureaucrat);
};

std::ostream& operator<<(std::ostream& outPut, const Form& form);

#endif