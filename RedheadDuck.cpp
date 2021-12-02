#include "RedheadDuck.h"

RedheadDuck::RedheadDuck() {
	this->flyBehavior = new FlyWithWings();
	this->quackBehavior = new Quack();
}

void RedheadDuck::display() {
	cout << "I'm Redhead Duck" << endl;
}