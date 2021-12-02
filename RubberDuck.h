#ifndef RUBBERDUCK_H
#define RUBBERDUCK_H

#include "Duck.h"
#include "FlyNoWay.h"
#include "Squeak.h"

class RubberDuck : public Duck
{
public:
	RubberDuck();
	void display();
};

#endif