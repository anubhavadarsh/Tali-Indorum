#include <iostream>

using namespace std;

int GCD(int x, int y)
{
    if(x == 0)
    {
        return y;
    }

    return GCD(y%x, x);
}

int main()
{
    int x,y;
    cout<<"Enter two number: ";
    cin>>x>>y;

    cout<<"GCD of "<<x<<" , "<<y<<" is "<<GCD(x,y)<<'\n';

    return 0;
}