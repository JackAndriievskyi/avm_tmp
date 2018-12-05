// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Logger.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/11/14 12:35:26 by yandriie          #+#    #+#             //
//   Updated: 2018/11/14 12:35:27 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Logger.hpp"
#include "BadFileException.hpp"



Log*	Logger::log_ = nullptr;



void	Logger::open() {

	log_ = new Log("stdin.avm.log");
	if (log_->bad())
		throw BadFileException("stdin.avm.log");
}

void	Logger::open(const std::string & filename) {

	log_ = new Log(filename + ".log");
	if (log_->bad())
		throw BadFileException(filename + ".log");
}

void	Logger::log(const std::string & msg) {

	log_->add(msg);
}

void	Logger::close() {

	delete log_;
}