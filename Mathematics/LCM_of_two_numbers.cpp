#include <iostream>

using namespace std;

int HCF(int x, int y)
{
    if(x == 0)
    {
        return y;
    }
    return HCF(y%x,x);
}

int LCM(int x, int y)
{
    return (x*y)/(HCF(x,y));
}

int main()
{
    int x,y;
    cout<<"Enter two numbers: ";
    cin>>x>>y;

    cout<<"LCM of "<<x<<" , "<<y<<" is "<<LCM(x,y)<<'\n';

    return 0;
}