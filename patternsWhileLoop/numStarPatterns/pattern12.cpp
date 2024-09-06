#include<iostream>
using namespace std;
int main()
{
    //to print the pattern 
// 1234
//  567
//   89
//    10

    int a;
    cout<<"Enter the value of a\n";
    cin>>a;
    int row=1;
    int value=row;
    while(row<=a)
    {
        int space=row-1;
        while(space)
        {
            cout<<" ";
            space=space-1;
        }
        int col=1;
        while(col<=a-row+1)
        {
            cout<<value;
            value=value+1;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }


//tp print the pattern
//    1
//   23
//  456
// 78910
    int n;
    cout<<"enter the value of n\n";
    cin>>n;
    int i=1;
    int count=i;
    while(i<=n)
    {
        int space=n-i;
        while(space)
        {
            cout<<" ";
            space=space-1;
        }
        int j=1;
        while(j<=i)
        {
            cout<<count;
           count=count+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }



}