#include "DecoyDuck.h"

DecoyDuck::DecoyDuck() {
	this->flyBehavior = new FlyNoWay();
	this->quackBehavior = new MuteQuack();
}

void DecoyDuck::display() {
	cout << "I'm Decoy Duck" << endl;
}