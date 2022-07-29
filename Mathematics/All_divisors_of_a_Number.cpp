#include <iostream>

using namespace std;

void  divisors(int n)
{
    int i = 1;
    int last_divisor;
    for(; i*i < n; ++i)
    {
        if(n % i == 0){
            cout<<i<<' ';
            last_divisor = i;} //keep check of the last divisor
    }
    for(; i > 0; --i)
    {
        if(n % i == 0 && last_divisor != n/i) //check if last divisor already printed
            cout<<n/i<<' ';
    }
}

int main()
{
    cout<<"Enter a number: ";
    int n;
    cin>>n;

    cout<<"Diviors of "<<n<<" are: \n";
    divisors(n);
    cout<<'\n';

    return 0;
}