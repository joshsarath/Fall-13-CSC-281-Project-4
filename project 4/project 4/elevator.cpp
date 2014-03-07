/*
 CSC 281 - Project #4
 modifier: Josh Sarath
 filename:
 date last modified: 10/3/13
 action:
 input:
 output:
 */

#include <math.h>
#include "elevator.h"
using namespace std;

//------------- Define member functions for class Triangle -------
//Constructor function with initialization:
Elevator::Elevator(int f)
{
    floors = f; // user choosen value of numebr of floors in building
    location = 1; //default floor for newly constructed elevator class
}

//request function
int Elevator::request(int floorTo)
/*
 action: requests elevator goes to a floor floorTo
 input:
 output:changes location of elevator
 */
{

    if (floorTo<=floors)
    {
        cout << "Starting at floor "<< location << "\n"; //prints starting
        while (floorTo>location)
        {
            cout<< "Going up-- now at floor "<< location<<"\n"; //prints moving from original floor
            location = location +1;
        }
        while (floorTo<location)
        {
            cout<< "Going down-- now at floor "<< location<<"\n"; //prints moving from original floor
            location = location -1;
        }
        cout << "Stopping at floor " << floorTo <<"\n"; //prints stopping
        location = floorTo;
    }
    else
		cout << "Not a valid floor. \n"; // if users tries to go to a floor above building limit
    
    
    return 0;
}
//give location function
int Elevator::giveLocation()
/*
 action: returns location
 input:no input
 output:returns location
 */
{
    return location; // accesses location value of the class
}
