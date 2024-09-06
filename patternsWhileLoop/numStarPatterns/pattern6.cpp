#include<iostream>
using namespace std;
int main()
{


    //to print the pattern 
// 1
// 12
// 123
// 1234
    int n;
    cout<<"Enter the value of n\n";
    cin>>n;
    int row=1;
    while(row<=n)
    {
        int col=1;
        while(col<=row)
        {
            cout<<col<<" ";
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }


 //to print the pattern
// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 
// 11 12 13 14 15 

    int a;
    cout<<"Enter the value of a\n";
    cin>>a;
    int i=1;
    int count=1;
    while(i<=n)
    {
        int j=1;
        while(j<=i)
        {
            cout<<count<<" ";
            count=count+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }


}