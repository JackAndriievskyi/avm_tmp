// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   avm.cpp                                            :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/11/15 10:54:06 by yandriie          #+#    #+#             //
//   Updated: 2018/11/15 10:54:07 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "avm.hpp"



bool	Avm::avmstate_ = true;
bool	Avm::stdin_ = false;



bool	Avm::avmstate() {

	return avmstate_;
}

void	Avm::avmstate(bool setter) {

	avmstate_ = setter;
}

bool	Avm::stdin() {

	return stdin_;
}

void	Avm::stdin(bool setter) {

	stdin_ = setter;
}