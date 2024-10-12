/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oseivane <oseivane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 10:38:44 by oseivane          #+#    #+#             */
/*   Updated: 2024/10/12 11:17:28 by oseivane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

# include <iostream>
# include <cstring>
# include <iomanip>

/*
	Iostream para el manejo de input-output.
	Cstring para el manejo y declaracion de strings.
	Iomanip para la manipulacion de inputs-outputs.

	Esta clase como las futuras, tienen varios componentes:
		-Privados: variables de la clase que solo se pueden
		acceder mediante los metodos y un Static Num para asegurar
		que solo hay una copia del valor.
		- Publicos: El Constructor y el Destructor de la clase.
		Y las funciones propias de la clase para influir a las 
		variables (lo que viene siendo los geters y seters).
	Curiosidad: Una estrutura en C seria como una clase donde
	todos sus miembros son publicos.
*/

class Contact
{
	private:
		std::string	firstName;
		std::string	lastName;
		std::string	nickName;
		std::string	phoneNum;
		std::string	darkestSecret;
		static int	numContact;
	
	public:
		Contact();
		~Contact();
		
		void		setFirstName(std::string str);
		void		setLastName(std::string str);
		void		setNickName(std::string str);
		void		setPhoneNumber(std::string str);
		void		setDarkestSecret(std::string str);
		static void	setNumContact(int n);

		static int	getNumContact();
		std::string	getFirstName();
		std::string	getLastName();
		std::string	getNickName();
		std::string	getPhoneNumber();
		std::string	getDarkestSecret();
};

#endif
