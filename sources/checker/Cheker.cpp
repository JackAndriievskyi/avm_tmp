// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Cheker.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/11/15 11:10:30 by yandriie          #+#    #+#             //
//   Updated: 2018/11/15 11:10:30 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "tokenInfo.hpp"
#include "avm.hpp"
#include "Logger.hpp"
#include "Cheker.hpp"
#include "Exceptions.hpp"
#include "typesInfo.hpp"
#include "instrInfo.hpp"
#include <istream>
#include <string>
#include <sstream>


bool	Checker::exit_ = false;
bool	Checker::eoi_ = false;
bool	Checker::stdin_ = false;
bool	Checker::iarg_ = false;
bool	Checker::instchecked_ = false;
bool	Checker::typechecked_ = false;
bool	Checker::commchecked_ = false;



void	Checker::check(std::istream & stream, bool stdin) {

	std::string		line;
	size_t			cnt_line;

	stdin_ = stdin;
	cnt_line = 0;
	for (std::getline(stream, line); stream.good() && !exit_ && !eoi_; std::getline(stream, line))
	{
		instchecked_ = false;
		typechecked_ = false;
		commchecked_ = false;

		cnt_line++;

		std::stringstream ss;
		ss << line;

		std::string token;
		try {
			ss >> token;
			checkInstruction(token, cnt_line);
			if (iarg_ && instchecked_)
			{
				ss >> token;
				checkType(token, cnt_line);
			}
			if (!comm_)
			{
				ss >> token;
				checkComment(token, cnt_line);
			}
		}

		catch (LexicalException & e) {
			log(e.what());
		}

		catch (SyntacticException & e) {
			log(e.what());
		}

		catch (WrnUnderflowException & e) {
			log(e.what());
			//ss >> token;
			//checkComment(token);
		}

		catch (WrnOverflowEception & e) {
			log(e.what());
			//ss >> token;
			//checkComment(token);
		}
	}

	try {
		finCheck(stream.good());
	}
	catch (NoExitException & e) {
		log(e.what());
	}
	catch (WrnExitException & e) {
		log(e.what());
	}

}

bool	Checker::checkInstruction(std::string & token, size_t lineNumber) {

	if (token.empty())
	InstructionInfo::eInstruction	instr = getInst(token);

	if (instr == InstructionInfo::eInstruction::None)
	{
		try {
			checkType(token, lineNumber);
		}
		catch (std::exception & e) {
			throw LexicalException(lineNumber, token);
		}
		try {
			checkComment(token, lineNumber);
		}
		catch(std::exception & e) {
			throw SyntacticException(lineNumber, token);
		}
	}

	return getInstArg(instr);
}

void	Checker::checkType(std::string & token, size_t lineNumber) {

}

void	Checker::checkComment(std::string & token, size_t lineNumber) {

}
