/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewu <ewu@student.42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 15:53:02 by ewu               #+#    #+#             */
/*   Updated: 2025/03/15 12:02:41 by ewu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <string>
#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"
// class Bureaucrat;

class AForm
{
private:
	bool _signed;
	const int _gradeToSign;
	const int _gradeToExcu;
	const std::string _name;
	const std::string _target;
	
public:
	AForm(const std::string& name, int gradeToSign, int gradeToExcu, const std::string& target);
	//check
	AForm(const AForm& other);
	AForm& operator=(const AForm& other);
	virtual ~AForm();
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
	class FormNotSignedException : public std::exception
	{
	public:
		const char* what() const throw();
	};
	const std::string& getName() const;
	bool getIsSigned() const;
	int getGradeToSign() const;
	int getGradeToExcu() const;
	const std::string& getTarget() const;//check
	
	virtual void beSigned(const Bureaucrat& bureaucrat);
	virtual void execute(const Bureaucrat& executor) const;
	protected:
	virtual void _doExec() const = 0;
	//check
	//pure virtual ft, create abstract class
};

std::ostream& operator<<(std::ostream& outPut, const AForm& form);

#endif