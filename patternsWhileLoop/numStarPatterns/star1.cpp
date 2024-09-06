#include<iostream>
using namespace std;
int main()
{
//to print the pattern
// ****
// ****
// ****
// ****
    int n;
    cout<<"Enter the value of n\n";
    cin>>n;
    int i=1;    //for no. of rows
    while(i<=n)
    {
        int j=1;    //for no. of columns
        while(j<=n)
        {
            cout<<"*";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }


}