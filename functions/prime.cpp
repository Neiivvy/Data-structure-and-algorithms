#include<iostream>
using namespace std;
//boolean 1=>false=>prime  0=>true=>composite
bool prime(int n)
{
    int r,i;
    for(i=2;i<n;i++)
    {
        r=n%i;
        if(r!=0)
        {
            return 1;
        }
        return 0;
    }

}
int main(){
    int num;
    cout<<"Enter any number\n";
    cin>>num;
    if(prime(num))
    {
            cout<<"Number is prime"<<endl;
    }
    else{
        cout<<"Number is composite";
    }
}