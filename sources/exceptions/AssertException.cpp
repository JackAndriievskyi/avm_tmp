// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   AssertException.cpp                                :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/11/14 08:51:37 by yandriie          #+#    #+#             //
//   Updated: 2018/11/14 08:51:37 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "AssertException.hpp"



AssertException::AssertException(size_t line) {

	this->msg_ = "Error :\n\tLine "
				+ std::to_string(line)
				+ ": Instruction assert on an empty stack.";

}

AssertException::~AssertException() throw () {

}

const char* AssertException::what( void ) const throw () {

	return this->msg_.c_str();
}