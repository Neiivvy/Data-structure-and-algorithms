//whether any given number is power of 2 or not
//USING BITWISE OPERATOR
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter any number\n";
    cin>>n;
    
    //condition where we perform bitwise operation
    //If a number is a power of 2, then the bit’s of the previous number will be a complement of the number.
    if((n!=0)&&((n & n-1))==0){
    cout<<"The given number is a power of 2\n";
    }
    else{
        cout<<"The given number is not a power of 2";
    }
    return 0;

}
