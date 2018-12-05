// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   SyntacticException.cpp                             :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/11/14 08:36:03 by yandriie          #+#    #+#             //
//   Updated: 2018/11/14 08:36:04 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "SyntacticException.hpp"



SyntacticException::SyntacticException(size_t line, std::string & token) {

	this->msg_ = "Syntactic Error :\n\tLine "
				+ std::to_string(line)
				+ ": expected unqualified-id expression"
				+ token;

}

SyntacticException::~SyntacticException() throw () {

}

const char* SyntacticException::what( void ) const throw () {

	return this->msg_.c_str();
}