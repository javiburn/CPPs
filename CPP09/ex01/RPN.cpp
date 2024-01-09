/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:51:08 by jsarabia          #+#    #+#             */
/*   Updated: 2024/01/09 17:06:04 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(){
	return;
}

RPN::RPN(const RPN& rpn){
	(void)rpn;
	return;
}

RPN& RPN::operator=(const RPN& rpn){
	(void)rpn;
	return *this;
}

RPN::~RPN(void){
	return;
}

std::stack<int>	operate(std::stack<int> stack, char token){
	int first, second;

	second = stack.top();
	stack.pop();
	first = stack.top();
	stack.pop();
	switch (token)
	{
	case '+':
		stack.push(first + second);
		break;
	case '-':
		stack.push(first - second);
		break;
	case '*':
		stack.push(first * second);
		break;
	case '/':
		stack.push(first / second);
		break;
	}
	return stack;
}

void RPN::polishNotation(char *str){
	std::stack<int> stack;
	char	*endptr;
	char	*token = strtok(str, " ");

	while (token){
		std::string	toComp = token;
		strtol(token, &endptr, 10);
		std::stringstream num;
		num << token;
		double thisNum;
		num >> thisNum;
		if (toComp == "+" || toComp == "-" || toComp == "*" || toComp ==  "/"){
			if (stack.size() < 2){
				std::cerr << "Error" << std::endl;
				return;
			}
			else
				stack = operate(stack, token[0]);
		}
		else if ((thisNum == 0 && *endptr != '\0') || toComp.find(".") < toComp.length()){
			std::cerr << "Error" << std::endl;
			return;
		}
		else
			stack.push(thisNum);
		token = strtok(NULL, " ");
	}
	if (stack.size() > 1)
		std::cerr << "Error" << std::endl;
	else
		std::cout << stack.top() << std::endl;
}
