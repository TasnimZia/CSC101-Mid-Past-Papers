#include <iostream>
using namespace std;

int main ()
{
    int m, n, p, sum = 0;
    cout<<"m = ";
    cin>>m;

    cout<<"n = ";
    cin>>n;

    cout<<"p = ";
    cin>>p;

    int new_n;

    for (int i = m; i <= n; i++)
    {
        if (i % p == 0)
        {
            sum += i;
            //cout<<i<<" = "<<sum;
//            if ( i != n)
//                cout <<" + "<< i ;
            if (i == n)
                cout <<" = "<<sum;
            if (i != n)
                cout <<" + "<< i ;
        }
    }

    return 0;
}
