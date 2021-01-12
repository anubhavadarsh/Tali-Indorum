#include <iostream>

using namespace std;

int factorial(int n)
{
    /*Returns the factorial of a number*/
    int fac = 1;                        //initializing fac with 1, since it is multiplicative identity.
    
    for(int i = 1; i <= n; ++i)
    {
        fac = fac*i;                   //multiply all the number from 1 to n
    }

    return fac;
}

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    cout<<"Factorial of "<<n<<" is "<<factorial(n)<<'\n';

    return 0;
}