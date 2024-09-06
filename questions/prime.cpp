#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter any number\n";
    cin>>n;
    bool prime=1;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            prime=0;
            break;  //gets us out of loop
        }
    }

    if(prime==0)
    {
        cout<<"Not a prime number\n";
    }
    else{
        cout<<"Prime number\n";
    }
}