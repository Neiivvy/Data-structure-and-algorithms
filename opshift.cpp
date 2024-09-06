//AND, OR , NOT , XOR OPERATORS
//LEFT AND RIGHT SHIFT
//PRE AND POST INCREMENT/DECREMENT
//bit,reverse

#include<iostream>
using namespace std;
int main()
{
    int a=3;
    int b=6;
    
    //1.
    //AND, OR , NOT , XOR OPERATORS
    cout<<"AND OPERATION: a&b "<<(a&b)<<endl;
    cout<<"OR OPERATION: a|b "<<(a|b)<<endl;
    cout<<"NOT OPERATION: ~b "<<(~a)<<endl;
    cout<<"NOT OPERATION: ~a "<<(~b)<<endl;
    cout<<"XOR OPERATION: a^b "<<(a^b)<<endl;

   //2.
   //right shift divides by 2 and left shift multiplies by two
    //left shifting positive numbers once gives multiple of 2
    //and so on
    //for eg: shifting 21 one time 21*2
            //shifting 21 two times give 21*2*2
            //applied for bith left and right shift of positive numbers

    //left shift
    cout<<"LEFT SHIFT: "<<(17<<1) <<endl;
    cout<<"LEFT SHIFT: "<<(17<<2) <<endl;
    //right shift
    cout<<"RIGHT SHIFT: " <<(21>>1) <<endl;
    cout<<"RIGHT SHIFT: "<<(21>>2) <<endl;

//3.pre/post increment
cout<<"pre and post increment\n";
int i=4;
int sum=3;
cout<<(++i)<<endl;
cout<< (i++)<<endl;

cout<<(sum=sum+(++i))<<endl;
cout<<(sum=sum+(i++))<<endl;

cout<<"pre and post decrement\n";
//4.pre/post decrement
cout<<(--i) <<endl;
cout<<(i--) <<endl;

cout<<(sum=sum+(--i))<<endl;
cout<<(sum=sum+(i--))<<endl;


//4.When anding any number with one if it gives one it is odd number and if it gives 0 it is even number
//for example: n&1
//to compute any bit of a number bit=n&1 and right shift


//5.to print the reverse of a bit(digit=345)
//answer=0;
//answer=(digit*10^i)+answer
//where digit is the given, i is the number of iteration and answer changes after every new iteration
//output=543

//6.to print same number of bit
//answer=0;
//answer=(answer*10)+digit
//output=345

}