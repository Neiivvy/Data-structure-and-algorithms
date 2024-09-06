//  Total amount = 1330
//calculate how many notes it takes of 100, 50 , 20 and 1 to reach the amount
//yet to complete
#include<iostream>
using namespace std;
int main()
{
    int amount;
    cout<<"Enter any number\n";
    cin>>amount;
    int note;
    switch(amount)
    {
        case 1 : 
        note= amount/100;
        amount=amount-(note*100);
        cout<<"The required not of hundred is :"<<note;
        case 2 :
        note= amount/50;
        amount=amount-(note*50);
        cout<<"The required not of hundred is :"<<note;
        case 3:
        note= amount/20;
        amount=amount-(note*20);
        cout<<"The required not of hundred is :"<<note;
        case 4:
        note= amount/1;
        amount=amount-(note*1);
        cout<<"The required not of hundred is :"<<note;
        break;
        default:
        cout<<"please enter a valid number\n";

    }
    return 0;
}