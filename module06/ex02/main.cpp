/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 14:32:21 by zqadiri           #+#    #+#             */
/*   Updated: 2022/02/28 17:30:35 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Base
{
	public:
		virtual ~Base(){};
};

class A : public Base
{
};

class B : public Base
{
};

class C : public Base
{
};

Base    *generate(void)
{
	srand(time(NULL));
	int choice1 , choice2;
	choice1 = rand();
	choice2 = rand();
	if (choice1 % 2){
		std::cout << "instance Type A" << std::endl;
		Base *classA = new A();
		return classA;
	}
	else if (choice2 % 2){
		std::cout << "instance Type B" << std::endl;
		Base *classB = new B();
		return classB;
	}
	std::cout << "instance Type C" << std::endl;
	Base *classC = new C();
	return classC;    
}

void identify(Base* p)
{
	A *instA = dynamic_cast<A*>(p);
	B *instB = dynamic_cast<B*>(p);
	C *instC = dynamic_cast<C*>(p);
	if (instA != nullptr)
		std::cout << "A" <<std::endl;
	if (instB != nullptr)
		std::cout << "B" <<std::endl;
	if (instC != nullptr)
		std::cout << "C" <<std::endl;
}

void identify(Base& p)
{
	try{
		A &instA = dynamic_cast<A&>(p);
		std::cout << "A ref" <<std::endl;
		
	}
	catch(const std::exception& e){
		std::cerr << e.what() << '\n';
	}
	try{
		B &instB = dynamic_cast<B&>(p);
		std::cout << "B ref" <<std::endl;
	}
	catch(const std::exception& e){
		std::cerr << e.what() << '\n';
	}
	try{
		C &instC = dynamic_cast<C&>(p);
		std::cout << "C ref" <<std::endl;
	}
	catch(const std::exception& e){
		std::cerr << e.what() << '\n';
	}
}

int main(void)
{
	Base *classX = generate();
	identify(classX);
	identify(*classX);
	return 1;
}