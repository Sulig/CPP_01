/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 16:50:55 by sadoming          #+#    #+#             */
/*   Updated: 2025/01/29 19:38:49 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/replace.hpp"

int main(int argc, char **argv)
{
	char		*filename;
	std::string	s1;
	std::string	s2;

	if (argc != 4)
	{
		std::cout << "Insuficient arguments." << std::endl;
		std::cout << "Usage: " << argv[0] << " <filename> <orininal sentence> <replace to>" << std::endl;
		return (1);
	}
	else
	{
		filename = argv[1];
		s1 = argv[2];
		s2 = argv[3];
		if (s1.empty() || s2.empty())
		{
			std::cout << "Empty strings are not allowed." << std::endl;
			return (1);
		}
		manageFiles(filename, s1, s2);
	}
	return 0;
}
