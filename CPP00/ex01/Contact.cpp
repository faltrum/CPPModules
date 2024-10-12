/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oseivane <oseivane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 10:58:14 by oseivane          #+#    #+#             */
/*   Updated: 2024/10/12 13:27:42 by oseivane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

//Inicilizar la variable numContact en 0
int	Contact::numContact = 0;

//Crear el constructor de clase
Contact::Contact() {}

//Crear el destructor de clase
Contact::~Contact()	{}

/*Crear las funciones setter para introducir
los valores en las variables. La primer funcion es de ejemplo
de como quedaria en Norminette en C, el resto esta optimizado
para una lectura adecuada*/
void	Contact::setNumContact(int i)
{
	Contact::numContact = i;
}

void	Contact::setFirstName(std::string str) {this->firstName = str;}

void	Contact::setLastName(std::string str) {this->lastName = str;}

void	Contact::setNickName(std::string str) {this->nickName = str;}

void	Contact::setPhoneNumber(std::string str) {this->phoneNum = str;}

void	Contact::setDarkestSecret(std::string str) {this->darkestSecret = str;}

/*Crear las funciones getter para rescatar
los valores en las variables. La primer funcion es de ejemplo
de como quedaria en Norminette en C, el resto esta optimizado
para una lectura adecuada*/

int	Contact::getNumContact()
{
	return (Contact::numContact);
}

std::string	Contact::getFirstName() { return (firstName);}

std::string	Contact::getLastName() { return (lastName);}

std::string	Contact::getNickName() { return (nickName);}

std::string	Contact::getPhoneNumber() { return (phoneNum);}

std::string	Contact::getDarkestSecret() { return (darkestSecret);}
