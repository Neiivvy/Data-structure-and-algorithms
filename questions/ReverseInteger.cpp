#include<iostream>
#include<math.h>
#include<climits>
using namespace std;
int main()
{
    int a;
    cout<<"Enter any number\n";
    cin>>a;
    int s=0;
    while(a!=0)
    {
        int r=a%10; //gives the value of remainder=last digit
        if((s<INT_MIN/10) || (s>INT_MAX/10))    //for condition of integer out of range
        {
                return 0;
        }

        s=s*10+r;
        a=a/10;
    }
    cout<<"Reverse of given integer is "<<s;
}
