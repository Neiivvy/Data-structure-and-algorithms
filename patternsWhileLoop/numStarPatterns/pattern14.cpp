#include<iostream>
using namespace std;
int main()
{
    //to print the pattern
//    1
//   121
//  12321
// 1234321
    int n;
    cout<<"Enter the value of n\n";
    cin>>n;
    
    //for space
    int i=1;
    while(i<=n)
    {

    int space=n-i;
    while(space)
    {
        cout<<" ";
        space=space-1;
    }

//for first triangle
int j=1;
while(j<=i)
{

cout<<j;
j=j+1;
}

//for second triangle
int start=i-1;
while(start)
{
    cout<<start;
    start=start-1;
}
cout<<endl;
i=i+1;

    }
}