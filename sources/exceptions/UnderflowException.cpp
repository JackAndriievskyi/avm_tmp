// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   UnderflowException.cpp                             :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/11/14 08:37:37 by yandriie          #+#    #+#             //
//   Updated: 2018/11/14 08:37:38 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "UnderflowException.hpp"



UnderflowException::UnderflowException(size_t line, std::string & token) {

	this->msg_ = "Error :\n\tLine "
				+ std::to_string(line)
				+ ": operation result causes underflow"
				+ token;

}

UnderflowException::~UnderflowException() throw () {

}

const char* UnderflowException::what( void ) const throw () {

	return this->msg_.c_str();
}