#include <iostream>

using namespace std;

bool palindrome(int n)
{
    /*Returns True if the number is a palindrome, else false*/
    int n_c = n;    //store the copy of n
    int rev = 0;    //store the reverse of n

    while(n_c != 0)
    {
        rev = rev*10 + n_c%10;  //get the number at one's place and store in rev
        n_c = n_c/10;           //remove the number in one's place
    }

    return (rev == n);
}

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    cout<<n<<" is a palindrome? "<<boolalpha<<palindrome(n)<<'\n';

    return 0;
}