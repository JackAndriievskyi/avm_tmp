// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   PopOnEmptyException.cpp                            :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/11/14 08:38:02 by yandriie          #+#    #+#             //
//   Updated: 2018/11/14 08:38:02 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "PopOnEmptyException.hpp"



PopOnEmptyException::PopOnEmptyException(size_t line) {

	this->msg_ = "Error :\n\tLine "
				+ std::to_string(line)
				+ ": Instuction pop on an empty stack.";

}

PopOnEmptyException::~PopOnEmptyException() throw () {

}

const char* PopOnEmptyException::what( void ) const throw () {

	return this->msg_.c_str();
}