#include "MallardDuck.h"

MallardDuck::MallardDuck() {
	this->flyBehavior = new FlyWithWings();
	this->quackBehavior = new Quack();
}

void MallardDuck::display() {
	cout << "I'm Mallard Duck" << endl;
}