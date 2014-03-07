//using namespace std;
#include <iostream>

// Declarations for class Elevator
class Elevator
{
public:
    Elevator(int);
    // constructor for elevator, number of floors entered
    int request(int);
    // request elevator at a floor (int)
    int giveLocation();
    // returns where the elevator is

    
private:
    int location, floors;
};