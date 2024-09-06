#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n\n";
    cin>>n;
    int a=0;
    int b=1;
    cout<<"Fibonacci series: \n";
    cout<<a<<"\t"<<b<<"\t";
    for(int i=1;i<=n;i++)
    {
        int c=a+b;
        cout<<c<<"\t";

        a=b;
        b=c;

    }


}