/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oseivane <oseivane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 11:40:40 by oseivane          #+#    #+#             */
/*   Updated: 2024/10/12 15:08:27 by oseivane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

/*
    Primero se crea el Constructor de la clase,
    con los parametros que tu quieras, o por defecto vacio.
    Se inicializa lasIndex en -1 y el size en 0.
*/

PhoneBook::PhoneBook()
{
    this->lastIndex = -1;
    this->size = 0;
}

/* Tambi'en se devbe crear el destructor de clase*/

PhoneBook::~PhoneBook() {}

/*La siguiente funcion preguntara por un input y lo retornara,
si el input esta vacio o el primer caracter es un espacio, 
preguntara otra vez por un input*/
std::string inputOption(std::string option)
{
    std::string	input;
	
	std::cout << option << ":";
	if (!std::getline(std::cin, input))
		return("");
	while (input == "" || std::isspace(input[0]))
	{
		std::cout << "Incorrect Input" << std::endl;
		std::cout << option << ":";
		if (!std::getline(std::cin, input))
			return ("");
	}
	return input;
}

/*
	Esta funcion guardara contactos en el phonebook.
	Preguntara por: first name, last name, nickname,
	phone number y darkest secret.
	Si el input esta vacio, devolvera un 1.
	Si el phone number no es valido, devolvera un 1.
*/
bool PhoneBook::phoneNumberFilter(std::string str)
{
	int	len = str.length();
	if (len > 9)
		return (std::cout << "Phone number too long" << std::endl, false);
	else
	{
		for (int i = 0; i < len; i++)
		{
			if (!std::isdigit(str[i]))
				return (std::cout << "Phone number must a number" << std::endl, false);
		}
	}
	return (true);
}

int	PhoneBook::saveContact(int num)
{
	Contact *p;
	std::string	input;
	std::string	firstName;
	std::string	lastName;
	std::string	nickName;
	std::string	phoneNumber;
	p = &this->contact[num];

	input = inputOption("First Name");
	if (input == "")
		return 1;
	firstName = input;
	
	input = inputOption("Last Name");
	if (input == "")
		return 1;
	lastName = input;

	input = inputOption("NickName");
	if (input == "")
		return 1;
	nickName = input;
	
	input = inputOption("Phone Number");
	if (input == "" || !phoneNumberFilter(input))
		return 1;
	phoneNumber = input;

	input = inputOption("Darkest Secret");
	if (input == "")
		return 1;
	
	p->setFirstName(firstName);
	p->setLastName(lastName);
	p->setNickName(nickName);
	p->setPhoneNumber(phoneNumber);
	p->setDarkestSecret(input);
	return (0);	
}

/*
La siguiente funcion anade un contacto al phonebook.
Primero llama a saveContact para guardar el contacto,
despues incrementa el index si se ha guardado.
si el index es 7 se resetea a 0.
Si el tamano es manor a 8, incrementa el tamano.
*/

void	PhoneBook::addContact()
{
	int	tmpIndex = (this->lastIndex == 7) ? 0 : this->lastIndex + 1;

	Contact::setNumContact(tmpIndex);
	if (this->saveContact(tmpIndex))
	{
		std::cout << "Contact not saved\n" << std::endl;
		return ;
	}
	this->lastIndex = tmpIndex;
	std::cout << "New contact saved\n" << std::endl;
	if (this->size < 8)
		this->size += 1;
	return ;
}

/*
La proxima funcion buscara el contacto en el Phonebook:
	-Si esta vacio, return.
	-Devuelve el contacto.
	-Te pregunta por el indice del contacto.
	-Si el indice es incorrecto, vuelve.
	- Muestra la informacion del contacto.
	
	setw() se utiliza para definir el width del output.
	substr() se utiliza para sacar una substring de la string principal,
	en  este caso desde la posicion 0 a la 9 de la string.
*/
void	PhoneBook::searchContact()
{
	std::string	input;
	int			index = 0;

	if (this->size == 0)
	{
		std::cout << "Phonebook is empty\n" << std::endl;
		return ;
	}
	std::cout << std::setw(10) << "Index" << "|" << std::setw(10) << "First Name" "|" << \
		std::setw(10) << "Last Name" << "|" << std::setw(10) << "Nickname" << std::endl;
	for (int i = 0; i < this->size; i++)
	{
		std::cout << std::setw(10) << i + 1 << "|";

		if (this->contact[i].getFirstName().size() > 10)
			std::cout << std::setw(9) << this->contact[i].getFirstName().substr(0, 9) << "." << "|";
		else
			std::cout << std::setw(10) << this->contact[i].getFirstName() << "|";
		if (this->contact[i].getLastName().size() > 10)
			std::cout << std::setw(9) << this->contact[i].getLastName().substr(0, 9) << "." << "|";
		else
			std::cout << std::setw(10) << this->contact[i].getLastName() << "|";
		if (this->contact[i].getNickName().size() > 10)
			std::cout << std::setw(9) << this->contact[i].getNickName().substr(0, 9) << "." << std::endl;
		else
			std::cout << std::setw(10) << this->contact[i].getNickName() << std::endl;
	}
	std::cout << "Enter the index that you want to display" << std::endl;
	std::cout << ">> ";
	if (!std::getline(std::cin, input))
		return ;
	else if (input.length() != 1 || (input[0] - 49) < 0 || (input[0] - 48) > this->size)
		return (std::cout << "Invalid index|n" << std::endl, void());
	index = input[0] - '0' - 1;

	std::cout << "Index: " << index + 1 << std::endl;
	std::cout << "First Name: " << this->contact[index].getFirstName() << std::endl;
	std::cout << "Last Name: " << this->contact[index].getLastName() << std::endl;
	std::cout << "Nickname: " << this->contact[index].getNickName() << std::endl;
	std::cout << "Phone Number: " << this->contact[index].getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: " << this->contact[index].getDarkestSecret() << std::endl;
}
