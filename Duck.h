#ifndef DUCK_H
#define DUCK_H

#include <iostream>
#include "FlyBehavior.h"
#include "QuackBehavior.h"
using namespace std;

class Duck
{
public:
	FlyBehavior* flyBehavior;
	QuackBehavior* quackBehavior;
	Duck();
	void swim(); //плаванье
	virtual void display() = 0; //отображение
	void performFly(); //полет
	void performQuack(); //кряканье
};

#endif