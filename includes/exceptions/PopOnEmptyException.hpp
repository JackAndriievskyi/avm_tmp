// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   PopOnEmptyException.hpp                            :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/11/14 08:38:02 by yandriie          #+#    #+#             //
//   Updated: 2018/11/14 08:38:02 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#pragma once
#include <exception>
#include <string>

class PopOnEmptyException : std::exception
{
public:

	PopOnEmptyException(size_t);
	PopOnEmptyException(const PopOnEmptyException&) = default;
	PopOnEmptyException & operator=(const PopOnEmptyException&) = default;

	~PopOnEmptyException() throw ();

	const char* what() const throw ();


private:

	std::string msg_;


};