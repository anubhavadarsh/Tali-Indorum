#include <iostream>

using namespace std;

void  divisors(int n)
{
    int i = 1;
    int last_prime;
    for(; i*i < n; ++i)
    {
        if(n % i == 0){
            cout<<i<<' ';
            last_prime = i;}
    }
    for(; i > 0; --i)
    {
        if(n % i == 0 && last_prime != n/i)
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