#include <iostream>
#include "Point.h"
using namespace std;

int main()
{
    Point p1, p2;
    cout << "Enter first point coordinates: " << endl;
    cin >> p1;
    cout << "Enter second point coordinates: " << endl;
    cin >> p2;

    cout << "Point P1: " << p1 << endl;
    cout << "Point P2: " << p2 << endl;

    cout << "Distance between "<<p1<<" and " <<p2<<":" << p1 - p2 << endl;
    cout << "Mid Point between the two points :" << p1 / p2 << endl;
    cout << "Flip X Coordinate :" << p1.flip_x() << endl;
    cout << "Flip Y Coordinate : " << p2.flip_y() << endl;
    cout << "Comparing two points using == Operator :" << endl;
    bool equal = (p1 == p2);
    if (equal)
    {
        cout << "The Points "<<p1<< " and "<< p2<< " are same " << endl;
    }
    else
    {
        cout << "The Points " << p1 << " and " << p2 
             << " are not same" << endl;
    }
    cout << "Comparing two points using != Operator :" << endl;
    bool different = (p1 != p2);
    if (different)
    {
        cout << "The Points " << p1 << " and " << p2 
             << " are not same" << endl;
    }
    else
    {
        cout << "The Points " << p1 << " and " << p2 << " are same" << endl;
    }
    return 0;
}