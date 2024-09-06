#include<iostream>
using namespace std;
int main()
{
    //to print the pattern 
// 1111
//  222
//   33
//    4

    int a;
    cout<<"Enter the value of a\n";
    cin>>a;
    int row=1;
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
            cout<<row;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }

//to print  the pattern 
//    1
//   22
//  333
// 4444
    int n;
    cout<<"enter the value of n\n";
    cin>>n;
    int i=1;
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
            cout<<i;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }

}