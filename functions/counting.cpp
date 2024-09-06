//to print the numbers upto n(user input)
#include<iostream>
using namespace std;
void countnum(int);
int main()
{
    int a;
    cout<<"Enter any number\n";
    cin>>a;
    countnum(a);
}
void countnum(int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        cout<<i<<endl;
    }
}