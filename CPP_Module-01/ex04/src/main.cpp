/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamaya-g <aamaya-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 12:12:34 by aamaya-g          #+#    #+#             */
/*   Updated: 2025/12/24 13:30:18 by aamaya-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

std::string ftReplaceString(std::string line, const std::string& s1, const std::string& s2)
{
	size_t  i = 0;

	while (true)
	{
		i = line.find(s1, i);
		if (i == std::string::npos)
			break ;
		line.erase(i, s1.length());
		line.insert(i, s2);
		i += s2.length();
	}
	return line;
}

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cerr << "Error, expecting 3 arguments <filename> | <string1> | <sreing2>" << std::endl;
		return 1;
	}

	std::string     s1 = argv[2];
	std::string     s2 = argv[3];
	if (s1.empty ())
	{
		std::cerr << "Error, s1 can not be empty" << std::endl;
		return 1;
	}

	std::ifstream	inputFile(argv[1]);
	if (!inputFile.is_open())
	{
		std::cerr << "Could not open input file " << argv[1] << std::endl;
		return 1;
	}

	std::string		newFile = std::string(argv[1]) + ".replace";
	std::ofstream	outputfile(newFile.c_str());
	if (!outputfile.is_open())
	{
		std::cerr << "Could mot open output file " << newFile << std::endl;
		inputFile.close();
		return 1;
	}

	std::string	line;
	while (std::getline(inputFile, line))
	{
		std::string newLine = ftReplaceString(line, s1, s2);
		outputfile << newLine;
		if (inputFile.peek() != EOF) { outputfile << '\n'; }
	}

	inputFile.close();
	outputfile.close();
	return 0;
}
