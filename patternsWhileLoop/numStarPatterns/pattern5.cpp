#include<iostream>
using namespace std;
int main()
{
//printing pattern in right angled triangular
//we use (col<=row) in while condition

//to print the pattern
// *
// **
// ***
// ****

    int a;
    cout<<"Enter the value of a\n";
    cin>>a;
    int x=1;    //for no. of rows
    while(x<=a)
    {
        int y=1;        //for no. of columns
        while(y<=x)     //(column<=row)
        {
            cout<<"*";
            y=y+1;

        }

        cout<<endl;
        x=x+1;
    }
    //to print the pattern
// 1
// 22
// 333
// 4444
    int n;
    cout<<"Enter the value of n\n";
    cin>>n;
    int row=1;
    while(row<=n)
    {
        int col=1;
        while(col<=row)
        {
            cout<<row;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
}