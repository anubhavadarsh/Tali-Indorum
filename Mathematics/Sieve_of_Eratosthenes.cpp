#include <iostream>
#include <vector>

using namespace std;

void Sieve(int n)
{
    vector<int> sieve(n+1,true);

    for(int i = 2; i <= n; ++i)
    {
        if(sieve[i])
        {
            cout<<i<<' ';
            for(int j = i*i; j <= n; j+=i)
            {
                sieve[j] = false;
            }
        }
    }
}

int main()
{
    cout<<"Enter an number: ";
    int n;
    cin>>n;

    cout<<"Prime upto "<<n<<" are:\n";
    Sieve(n);
    cout<<'\n';

    return 0;
}