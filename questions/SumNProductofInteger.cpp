//SUBTRACT THE PRODUCT WITH SUM OF A DIGIT
#include<iostream>
using namespace std;
int main()
{
    int n,r,s=0,p=1,ans;
    cout<<"Enter any number\n";
    cin>>n;
    while(n!=0)
    {
        r=n%10;
        s=s+r;
        p=p*r;
        n=n/10;

    }
ans=p-s;
cout<<"The sum of digit is: "<<s<<endl;
cout<<"The product of digit is: "<<p<<endl;
cout<<"The final output is : \n"<<ans;

} 