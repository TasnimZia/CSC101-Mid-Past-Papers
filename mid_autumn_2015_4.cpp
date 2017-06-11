#include <iostream>
using namespace std;

int main ()
{
    int n, x, y;
    cout<<"x = ";
    cin>>x;

    cout<<"y = ";
    cin>>y;

    cout<<"n = ";
    cin>>n;

    if (n % x == 0 && n % y == 0)
        cout<<n<<" is divisible by both "<<x<<" and "<<y;
    else if (n % x == 0)
        cout<<n<<" is divisible by "<<x<<" only";
    else if (n % y == 0)
        cout<<n<<" is divisible by "<<y<<" only";
    else if (n % x != 0 && n % y != 0)
        cout<<n<<" is NOT divisible by either "<<x<<" or "<<y;


    return 0;
}
