/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewu <ewu@student.42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 12:15:43 by ewu               #+#    #+#             */
/*   Updated: 2025/03/15 13:04:53 by ewu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>

/** NOTE: 
 * exception classes
 */
class AForm;

class Bureaucrat
{
private:
	const std::string name;
	int grade;
	
public:
	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char* what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char* what() const throw();
	};
	Bureaucrat(const std::string& name, int grade);
	Bureaucrat(const Bureaucrat& other);
	Bureaucrat& operator=(const Bureaucrat& other);
	~Bureaucrat();
	
	void incrementGrade();//decrase grade_value to increment grade level
	void decrementGrade();
	void setName(const std::string& name);
	int getGrade() const;
	const std::string &getName() const;
	void signForm(AForm& form);
	void executeForm(const AForm& form) const;
};

std::ostream& operator<<(std::ostream& outPut, const Bureaucrat& bureaucrat);

#endif
