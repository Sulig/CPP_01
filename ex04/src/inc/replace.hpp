/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   principal.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 16:55:51 by sadoming          #+#    #+#             */
/*   Updated: 2025/01/29 19:29:30 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINCIPAL_HPP
# define PRINCIPAL_HPP

# include <fstream>
# include <iostream>
# include <string>

std::string	strreplace(std::string org, std::string find, std::string rep);
void		manageFiles(const char *fileName, std::string s1, std::string s2);

#endif
