/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oseivane <oseivane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 18:51:49 by oseivane          #+#    #+#             */
/*   Updated: 2024/10/12 18:51:50 by oseivane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

/*
Esta función reemplaza la string 2 con la string 3
Dada una string str, busca la string str2
Cuando la encuentra la reemplaza por la string str3
Entonces es cuando devuelve la nueva string

Detalles interesantes:
- .find() devolvera la posicion de la primera concurrencia de Str2
- Entonces con .substr() se obtendra la substring desde 0 a la
posicion de Str2 (partialStr).
- Añadir a finalStr el partialStr y el Str3.
-Entonces cogeremos la .substr() desde la posicion de Str2 hasta el final de la STR.
Se repetira el proceso hasta que no se encuentre mas Str2.
- Finalmente se añadira la ultima parte de la string a finalStr.
*/

std::string finalStr(std::string str, char *av2, char *av3)
{
    int         pos = 0;
    std::string finalStr;
    std::string partialStr;
    std::string str2 = av2;
    std::string str3 = av3;

    pos = (str.find(str2));
    if (pos >= 0)
    {
        while (pos >= 0)
        {
            std::string partialStr = str.substr(0, pos);
            finalStr += partialStr + str3;
            str = str.substr(pos + str2.length());
            pos = str.find(str2);
        }
    }
    finalStr = finalStr + str;
    return (finalStr);
}

/*

*/

int main(int ac, char **av)
{
    if (ac == 4)
    {
        //Crear el archivo de reemplazo
        std::ifstream infile(av[1]);
        if (!infile.is_open())
        {
            std::cout << "Invalid file" << std::endl;
            return (1);
        }
        std::string newFileName = std::string(av[1]) + ".replace";
        //Control de errores
        std::ofstream newFile(newFileName.c_str());
        if (!newFile.is_open())
        {
            std::cout << "New file has an error" << std::endl;
            return (1);
        }
        //añadir al reeemplazo la string a reemplazar
        std::string str;
        while (std::getline(infile, str))
        {
            std::string pStr = finalStr(str, av[2], av[3]);
            newFile << pStr << std::endl;
        }
    }
    else
    {
        std::cout << "Invalid parameters\n";
        std::cout << "\t3 arguments: File, str1, str2" << std::endl;
        return (1);
    }
    return (0);
}