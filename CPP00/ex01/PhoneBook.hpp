/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oseivane <oseivane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 11:23:33 by oseivane          #+#    #+#             */
/*   Updated: 2024/10/12 12:33:46 by oseivane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

# include "Contact.hpp"

/*
    Esta clase tiene Privadas el array de contactos, ultimo
    indice del phonebook y el tamano del mismo.
    Publico tiene, como no, el constructor y el destructor
    de clase, funciones para anadir, buscar y guardar contactos en
    el phonebook
*/

class	PhoneBook
{
	private:
		Contact	contact[8];
		int		lastIndex;
		int		size;

	public:
		PhoneBook();
		~PhoneBook();
		void	addContact();
		void	searchContact();
		int		saveContact(int NumContact);
		bool	phoneNumberFilter(std::string str);
};

#endif
