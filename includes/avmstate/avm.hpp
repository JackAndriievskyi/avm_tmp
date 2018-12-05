// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   avm.hpp                                            :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/11/15 10:53:54 by yandriie          #+#    #+#             //
//   Updated: 2018/11/15 10:53:55 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#pragma once

class Avm {

public:

	Avm() = delete;

	bool	avmstate();
	void	avmstate(bool);
	bool	stdin();
	void	stdin(bool);


private:

	static bool		stdin_;
	static bool		avmstate_;

}