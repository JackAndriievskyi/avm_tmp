// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Logger.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/11/14 12:35:04 by yandriie          #+#    #+#             //
//   Updated: 2018/11/14 12:35:05 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#pragma once
#include "Log.hpp"

class Logger
{
public:

	Logger() = delete;

	static void		open();
	static void		open(const std::string &);

	static void		log(const std::string &);

	static void		close();

private:

	static Log*		log_;
	
};