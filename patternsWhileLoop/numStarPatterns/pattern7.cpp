#include<iostream>
using namespace std;
int main()
{
    //to print the pattern
// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 
// 11 12 13 14 15 
    int n;
    cout<<"Enter the value of n\n";
    cin>>n;
    int row=1;
    int value=row;
    while(row<=n)
    {
        int col=1;
        while(col<=row)
        {
            cout<<value<<" ";
            value=value+1;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
}
