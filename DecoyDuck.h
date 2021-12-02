#ifndef DECOYDUCK_H
#define DECOYDUCK_H

#include "Duck.h"
#include "FlyNoWay.h"
#include "MuteQuack.h"

class DecoyDuck : public Duck
{
public:
	DecoyDuck();
	void display();
};

#endif