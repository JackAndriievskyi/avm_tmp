// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   AVM.cpp                                            :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/11/14 13:50:53 by yandriie          #+#    #+#             //
//   Updated: 2018/11/14 13:52:11 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include <fstream>
#include <string>
#include "avm.hpp"
#include "Logger.hpp"
#include "Exceptions.hpp"
#include "Checker.hpp"
#include "Parser.hpp"

std::ifstream	openFile(const std::string & filename) {

	std::ifstream	file = open(filename, std::ofstream::in);

	if (!file.is_open())
		throw BadFileException(filename);

	return file;
}



int 			main(int argc, char **argv) {

	//*****route part*****//
	std::ifstream 	file;

	if (argc == 1 && Avm::avmstate())
	{
		try {
			Logger::open();
		}
		catch (BadFileException &e) {
			std::cout << e.what() << std::endl;
			Logger::close();
			return 0;
		}

		Avm::stdin(true);
	}
	else if (argc == 2 && Avm::avmstate())
	{
		try {
			Logger::open(argv[1]);
		}
		catch (BadFileException &e) {
			std::cout << e.what() << std::endl;
			Logger::close();
			return 0;
		}

		try {
			file = openFile(argv[1]);
		}
		catch (BadFileException &e) {
			std::cout << e.what() << std::endl;
			Logger::close();
			return 0;
		}

		Avm::stdin(false);
	}
	else
		cout << "Usage:\t ?[filename]";


	//*****checker part*****//
	if (Avm::avmstate()) {
		try {
			if (file.is_open())
				Checker::check(file, Avm::stdin());
			else
				Checker::check(std::cin, Avm::stdin());
		}
		//...
	}


	//*****parser part*****//
	if (Avm::avmstate()) {
		file.seekg(0, file.beg);
		try {
			if (file.is_open())
				Parser::parse(file);
			else
				Pareser::parse(std::cin);
		}
		//...
	}


	//*****output part*****//
	if (Avm::avmstate()) {
		
	}
	else
		std::cout << "Compilation error, check log for more info." << std::endl;


	Logger::close();
	if (file.is_open())
		file.close();
	return 0;
}
