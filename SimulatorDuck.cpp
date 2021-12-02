#include "MallardDuck.h"
#include "RedheadDuck.h"
#include "RubberDuck.h"
#include "DecoyDuck.h"

int main()
{
    MallardDuck* duck1 = new MallardDuck();
    duck1->display();
    duck1->performQuack();
    duck1->performFly();
    cout << "" << endl;

    RedheadDuck* duck2 = new RedheadDuck();
    duck2->display();
    duck2->performQuack();
    duck2->performFly();
    cout << "" << endl;

    RubberDuck* duck3 = new RubberDuck();
    duck3->display();
    duck3->performQuack();
    duck3->performFly();
    cout << "" << endl;

    DecoyDuck* duck4 = new DecoyDuck();
    duck4->display();
    duck4->performQuack();
    duck4->performFly();
    cout << "" << endl;
}