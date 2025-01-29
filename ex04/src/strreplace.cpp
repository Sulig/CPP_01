/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strreplace.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 17:31:08 by sadoming          #+#    #+#             */
/*   Updated: 2025/01/29 19:38:56 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/replace.hpp"

std::string strreplace(std::string org, std::string find, std::string rep)
{
	std::string::size_type pos;

	pos = 0;
	if (org.empty() || find.empty() || rep.empty())
		return (org);
	while ((pos = org.find(find, pos)) != std::string::npos)
	{
		org.erase(pos, find.length());
		org.insert(pos, rep);
		pos += rep.length();
	}
	return (org);
}
