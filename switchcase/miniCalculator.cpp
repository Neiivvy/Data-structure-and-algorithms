//MINI calculator
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    char op;

    cout<<"Enter any two numbers\n";
    cin>>a>>b;
    cout<<"CHOOOSE THE OPERATION TO PERFORM :\n";
    cout<<" 1. Addition\n 2. subtraction\n 3. multiplication\n 4. division\n 5. modulus\n";
    cin>>op;
    switch(op)
    {
        case '+': cout<<"Addition) = "<<(a+b)<<endl;
        break;
        case '-': cout<<"Subtraction= "<<(a-b)<<endl;
        break;
        case '*': cout<<"Multiplicatio = "<<(a*b)<<endl;
        break;
        case '/': cout<<"Divison = "<<(a/b)<<endl;
         break;
        case '%': cout<<"Modulus = "<<(a % b)<<endl;
         break;

        default: cout<<"Invalid operator\n"<<endl;
    }


    return 0;

}