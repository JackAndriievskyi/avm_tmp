// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ZeroDivException.cpp                               :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/11/14 08:38:21 by yandriie          #+#    #+#             //
//   Updated: 2018/11/14 08:38:22 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ZeroDivException.hpp"



ZeroDivException::ZeroDivException(size_t line) {

	this->msg_ = "Error :\n\tLine "
				+ std::to_string(line)
				+ ": Division/modulo by 0 is forbidden.";
}

ZeroDivException::~ZeroDivException() throw () {

}

const char* ZeroDivException::what() const throw () {

	return this->msg_.c_str();
}