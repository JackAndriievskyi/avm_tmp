// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   InstInfo.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/11/15 13:12:21 by yandriie          #+#    #+#             //
//   Updated: 2018/11/15 13:12:22 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#pragma once
#include <vector>
#include <string>



class InstructionInfo {

public:

	InstructionInfo();
	InstructionInfo(const InstructionInfo &) = delete;
	InstructionInfo & operator=(const InstructionInfo &) = delete;
	~InstructionInfo();

	enum eInstruction
	{
		Push = 0,
		Pop,
		Dump,
		Assert,
		Add,
		Sub,
		Mul,
		Div,
		Mod,
		Print,
		Exit,
		None
	};

	const std::string &		getInstName(eInstruction &) const;
	const bool				getInstArg(eInstruction &) const;
	eInstruction			getInst(const std::string &) const;

private:

	const std::vector<const std::string>	instNames_;
	const std::vector<const bool>			instArgs_;

};