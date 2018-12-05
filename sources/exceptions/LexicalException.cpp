// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   LexicalException.cpp                               :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/11/14 08:34:25 by yandriie          #+#    #+#             //
//   Updated: 2018/11/14 08:34:26 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "LexicalException.hpp"



LexicalException::LexicalException(size_t line, std::string & token) {

	this->msg_ = "Lexical Error :\n\tLine "
				+ std::to_string(line)
				+ ": Expected unqualified-id\n"
				+ token;

}

LexicalException::~LexicalException() throw () {

}

const char* LexicalException::what( void ) const throw () {

	return this->msg_.c_str();
}