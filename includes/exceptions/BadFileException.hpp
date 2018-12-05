// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   BadFileException.hpp                               :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/11/14 13:01:38 by yandriie          #+#    #+#             //
//   Updated: 2018/11/14 13:01:38 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#pragma once
#include <exception>
#include <string>

class BadFileException : std::exception
{
public:

	BadFileException(const std::string &);
	BadFileException(const BadFileException&) = default;
	BadFileException & operator=(const BadFileException&) = default;

	~BadFileException() throw ();

	const char* what() const throw ();


private:

	std::string msg_;


};