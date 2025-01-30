/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manageFile.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 17:38:25 by sadoming          #+#    #+#             */
/*   Updated: 2025/01/30 17:33:57 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/replace.hpp"


long	fileWidth(const char *fileName)
{
	std::ifstream	file;
	long			lines;

	lines = 0;
	file.open(fileName, std::ios::in);
	if (!file.is_open())
	{
		std::cout << fileName << std::endl;
		std::cout << "File not found." << std::endl;
		return (0);
	}
	while (!file.eof())
	{
		std::string	line;
		std::getline(file, line);
		if (lines == 0 && line.empty())
			break ;
		lines++;
	}
	file.close();
	return (lines);
}

/* Replace the string in the file
** @param fileName: the name of the file
** @param s1: the string to be replaced
** @param s2: the string to replace with
*
* Note! -> This will replace the string in the file and save the changes.
*/
void manageFiles(const char *fileName, std::string s1, std::string s2)
{
	std::ifstream	file;
	std::ofstream	newFile;
	long			lines;

	lines = fileWidth(fileName);
	if (lines == 0)
	{
		std::cout << "File is empty." << std::endl;
		return ;
	}

	file.open(fileName, std::ios::in);
	// Create a string array to store the file content
	std::string *fileContent = new std::string[lines + 1];
	lines = 0;
	while (!file.eof())
	{
		std::string	line;
		std::getline(file, line);
		fileContent[lines++] = line;
	}
	fileContent[lines] = "";
	file.close();

	// Replace the string in the array
	for (long i = 0; i < lines; i++)
		fileContent[i] = strreplace(fileContent[i], s1, s2);

	// Write the new content to the file
	newFile.open(fileName, std::ios::out);
	for (long i = 0; i < lines; i++)
		newFile << fileContent[i] << std::endl;
	newFile.close();
	delete[] fileContent;
}
