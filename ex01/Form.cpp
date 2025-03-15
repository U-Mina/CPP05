/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewu <ewu@student.42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 19:08:51 by ewu               #+#    #+#             */
/*   Updated: 2025/03/01 21:21:50 by ewu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(const std::string& name, int gradeToSign, int gradeToExcu)
	: _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExcu(gradeToExcu)
{
	if (gradeToSign < 1 || gradeToExcu < 1)
		throw Form::GradeTooHighException();
	if (gradeToSign > 150 || gradeToExcu > 150)
		throw Form::GradeTooLowException();
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Form: Grade too hige!\n");
}
const char* Form::GradeTooLowException::what() const throw()
{
	return ("Form: Grade too low!\n");
}

const std::string& Form::getName() const
{
	return this->_name;
}
int Form::getGradeToSign() const
{
	return _gradeToSign;
}
int Form::getGradeToExcu() const
{
	return _gradeToExcu;
}
bool Form::getIsSigned() const
{
	return _signed;
}

//numerical grade smaller means Grade HIGHER
void Form::beSigned(const Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() <= this->getGradeToSign())
	{
		_signed = true;
	}
	else if (bureaucrat.getGrade() > this->getGradeToSign())
	{
		throw Form::GradeTooLowException();
	}
}

//format: print all inormation
std::ostream& operator<<(std::ostream& outPut, const Form& form)
{
	outPut << "Form: " << form.getName() << "\nSigned: "
	<< (form.getIsSigned()? "YES" : "NO") << "\nGrade required to sign is: "
	<< form.getGradeToSign() << "\nGrade required to execute is: "
	<< form.getGradeToExcu() << "\n";
	return outPut;
}

Form::~Form()
{
	//std::cout << "Form destructor called!\n";
}
