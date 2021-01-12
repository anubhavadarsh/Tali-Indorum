#include <iostream>

using namespace std;

int countZeros(int n)
{
    /*Return the number of zeros in the factorial of a given number*/

    int count = 0;
    for(int i = 5; i <= n; i=i*5)
    {
        count = count + n/i;
    }
    return count;
}

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    cout<<n<<'!'<<" has "<<countZeros(n)<<" zeros";

    return 0;
}