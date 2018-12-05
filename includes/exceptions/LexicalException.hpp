// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   LexicalException.hpp                               :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/11/14 08:34:25 by yandriie          #+#    #+#             //
//   Updated: 2018/11/14 08:34:26 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#pragma once
#include <exception>
#include <string>

class LexicalException : std::exception
{
public:

	LexicalException(size_t, std::string &);
	LexicalException(const LexicalException&) = default;
	LexicalException & operator=(const LexicalException&) = default;

	~LexicalException() throw ();

	const char* what() const throw ();


private:

	std::string msg_;


};