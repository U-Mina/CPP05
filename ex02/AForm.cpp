/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewu <ewu@student.42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 19:08:51 by ewu               #+#    #+#             */
/*   Updated: 2025/03/15 12:07:39 by ewu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(const std::string& name, int gradeToSign, int gradeToExcu, const std::string& target) 
	: _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExcu(gradeToExcu), _target(target)
{
	if (gradeToSign < 1 || gradeToExcu < 1)
		throw AForm::GradeTooHighException();
	if (gradeToSign > 150 || gradeToExcu > 150)
		throw AForm::GradeTooLowException();
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return ("AForm: Grade too high!\n");
}
const char* AForm::GradeTooLowException::what() const throw()
{
	return ("AForm: Grade too low!\n");
}
const char* AForm::FormNotSignedException::what() const throw()
{
	return ("AForm: Form not signed!\n");	
}

AForm::~AForm()
{
	//std::cout << "Form destructor called!\n";
}

const std::string& AForm::getName() const
{
	return this->_name;
}
int AForm::getGradeToSign() const
{
	return _gradeToSign;
}
int AForm::getGradeToExcu() const
{
	return _gradeToExcu;
}
bool AForm::getIsSigned() const
{
	return _signed;
}
const std::string& AForm::getTarget() const
{
	return _target;
}

//numerical grade smaller means Grade HIGHER
void AForm::beSigned(const Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() <= this->getGradeToSign())
	{
		_signed = true;
	}
	else if (bureaucrat.getGrade() > this->getGradeToSign())
	{
		throw AForm::GradeTooLowException();
	}
}

void AForm::execute(const Bureaucrat& executor) const
{
	if (_signed == false)
		throw AForm::FormNotSignedException();
	else if (executor.getGrade() > _gradeToExcu)
		throw AForm::GradeTooLowException();
	else
		_doExec();
}

//format: print all inormation
std::ostream& operator<<(std::ostream& outPut, const AForm& form)
{
	outPut << "Form: " << form.getName() << "\nSigned: "
	<< (form.getIsSigned()? "YES" : "NO") << "\nGrade required to sign is: "
	<< form.getGradeToSign() << "\nGrade required to execute is: "
	<< form.getGradeToExcu() << "\n";
	return outPut;
}

AForm::AForm(const AForm& other)
	: _name(other._name), _signed(other._signed), _gradeToSign(other._gradeToSign),
	_gradeToExcu(other._gradeToExcu), _target(other._target)
{
	//std::cout << "copy called!\n";
}
AForm& AForm::operator=(const AForm& other)
{
	if (this != &other)
		this->_signed = other._signed;//check
	return *this;
}