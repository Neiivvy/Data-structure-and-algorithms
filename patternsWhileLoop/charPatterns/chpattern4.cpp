#include<iostream>
using namespace std;
int main()
{

    //to print the pattern 
// A
// AB
// ABC
// ABCD
    int a;
    cout<<"enter the value of a\n";
    cin>>a;
    int i=1;
    while(i<=a)
    {
        int j=1;
        char ch='A';
        while(j<=i)
        {
            cout<<ch;
            ch=ch+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;

    }
}