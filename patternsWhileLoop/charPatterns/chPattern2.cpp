#include<iostream>
using namespace std;
int main()
{

    //to print the pattern 
// A
// BB
// CCC
// DDDD
// EEEEE
    int n;
    cout<<"Enter the value of n\n";
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=i)
        {
            char ch='A'+i-1;
            cout<<ch;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }

// to print the pattern
// A
// BC
// CDE
// DEFG
    int a;
    cout<<"Enter the value of a\n";
    cin>>a;
    int row=1;
    while(row<=n)
    {
        int col=1;
        while(col<=row)
        {
              char ch='A'+row+col-2;
            cout<<ch;
            ch=ch+1;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }

}