#ifndef MALLARDDUCK_H
#define MALLARDDUCK_H

#include "Duck.h"
#include "FlyWithWings.h"
#include "Quack.h"

class MallardDuck : public Duck
{
public:
	MallardDuck();
	void display();
};

#endif