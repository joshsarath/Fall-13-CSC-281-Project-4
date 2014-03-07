// Add your comments here
#include <iostream>
#include "elevator.h"
using namespace std;


int main()
{
    int o,t;
	Elevator otis(10);
	Elevator toHeaven(7);

	otis.request(5);
	otis.request(15);
	otis.request(8);
	toHeaven.request(6);
	toHeaven.request(2);
	o = otis.giveLocation();
	t = toHeaven.giveLocation();
	if (o == t)
		cout<< "The elevators are on the same floor. \n";
	else
		cout<<"The elevators are not on the same floor. \n";
    
    
	otis.request(2);
	toHeaven.request(2);
	o = otis.giveLocation();
	t = toHeaven.giveLocation();
	if (o == t)
		cout<< "The elevators are on the same floor. \n";
	else
		cout<<"The elevators are not on the same floor. \n";
	return 0;

}