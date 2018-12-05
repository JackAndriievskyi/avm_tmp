// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ArithmeticException.cpp                            :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/11/14 08:52:52 by yandriie          #+#    #+#             //
//   Updated: 2018/11/14 08:52:53 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ArithmeticException.hpp"



ArithmeticException::ArithmeticException(size_t line) {

	this->msg_ = "Error :\n\tLine "
				+ std::to_string(line)
				+ ": The stack is composed of strictly less that two values when an arithmetic instruction is executed.";

}

ArithmeticException::~ArithmeticException() throw () {

}

const char* ArithmeticException::what( void ) const throw () {

	return this->msg_.c_str();
}