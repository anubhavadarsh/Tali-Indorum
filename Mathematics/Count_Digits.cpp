#include <iostream>
#include <math.h>

using namespace std;

int countDigits(int num)
{
    /*retuns the number of digits in an number*/
    return floor(log10(num)+1);
}

int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;

    cout<<countDigits(num)<<'\n';

    return 0;
}