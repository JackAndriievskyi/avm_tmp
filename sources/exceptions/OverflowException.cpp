// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   OverflowException.cpp                              :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/11/14 08:37:23 by yandriie          #+#    #+#             //
//   Updated: 2018/11/14 08:37:24 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "OverflowException.hpp"



OverflowException::OverflowException(size_t line, std::string & token) {

	this->msg_ = "Error :\n\tLine "
				+ std::to_string(line)
				+ ": operation result causes overflow"
				+ token;

}

OverflowException::~OverflowException() throw () {

}

const char* OverflowException::what( void ) const throw () {

	return this->msg_.c_str();
}