/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 17:39:46 by sadoming          #+#    #+#             */
/*   Updated: 2025/01/28 19:18:33 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

/* PTR && REF */
/** Both are used to store the address of another variable.
*	- PTR: Pointer is a variable that stores the memory address as its value.
*		* It is a variable that stores the address of another variable.
*		* You can reassign the pointer to another variable.
*	- REF: Reference is a variable that refers to another variable.
*		* It is an alias for another variable.
*		* You cannot reassign the reference to another variable.
*/
int	main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "Address of the string:\t\t" << &str << std::endl;
	std::cout << "Address of the string PTR:\t" << stringPTR << std::endl;
	std::cout << "Address of the string REF:\t" << &stringREF << std::endl;
	std::cout << "Accesing String itself:\t\t" << str << std::endl;
	std::cout << "Accesing String with PTR:\t" << *stringPTR << std::endl;
	std::cout << "Accesing String with REF:\t" << stringREF << std::endl;
	return (0);
}
