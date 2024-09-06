#include<iostream>
using namespace std;
int main()
{
    //to print the pattern
// 11111
// 2222
// 333
// 44
// 5
    int n;
    cout<<"Enter the value of n\n";
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=n-i+1)
        {
            cout<<i;
            j=j+1;
        }
        cout<<endl;
        i=i+1;

    }

}