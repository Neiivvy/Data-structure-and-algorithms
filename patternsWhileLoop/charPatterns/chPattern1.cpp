#include<iostream>
using namespace std;
int main()
{
//to print the pattern 
//formula ch='A'+row-1  //row=i
// AAAAA
// BBBBB
// CCCCC
// DDDDD
// EEEEE

    int n;
    cout<<"Enter the value of n\n";
    cin>>n;
    int row=1;
    while(row<=n)
    {
        int col=1;
        while(col<=n)
        {
            char ch='A'+row-1;
            cout<<ch;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }


    //to print the pattern
    ////formula ch='A'+col-1    //col=j
// ABCDE
// ABCDE
// ABCDE
// ABCDE
// ABCDE
    int a;
    cout<<"Enter the value of a\n";
    cin>>a;
    int i=1;
    while(i<=a)
    {
        int j=1;
        while(j<=a)
        {
            char ch='A'+j-1;
            cout<<ch;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}