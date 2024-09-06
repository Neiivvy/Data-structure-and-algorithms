// to calculate whether the given number is even odd
//two cases can be used:    using the n mod 2 formula for even 
                          //using the n&1 formula for odd  
#include<iostream>
using namespace std;
bool EvenOROdd(int);
//boolean function returns 1 => even and 0=>odd
int main()
{
    int a;
    cout<<"Enter any number\n";
    cin>>a;
    if (EvenOROdd(a)){

    cout<<"Number is even"<<endl;
    }
    else{
        cout<<"Number is odd";
    }


}
bool EvenOROdd(int num)
{
    if(num&1){
        return 0;
    }
    else{
        return 1;
    }
}