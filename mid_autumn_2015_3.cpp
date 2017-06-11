#include <iostream>
using namespace std;

int main ()
{
    int x, y;
    cout<<"Enter x and y coordinates: ";
    cin>>x>>y;

    if (x > 0 && y > 0)
        cout<<"1st quadrant";
    if (x < 0 && y > 0)
        cout<<"2nd quadrant";
    if (x < 0 && y < 0)
        cout<<"3rd quadrant";
    if (x > 0 && y < 0)
        cout<<"4th quadrant";
    if (x == 0 && y == 0)
        cout<<"Center";
    else if (x == 0)
        cout<<"Y-Axis";
    else if (y == 0)
        cout<<"X-Axis";

    return 0;
}
