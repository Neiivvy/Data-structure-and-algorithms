//take any two numbers as input (a,b) and calculate the power as pow(a,b)
//here user input is taken for the number of times we call the function
//pow function can be called using math.h as well as using normal formula with loop
#include<iostream>
#include<math.h>
using namespace std;

int power(int,int);                             //function declaration
int main()
{
    int a,b;
    int answer;
    int j,n;
    cout<<"Enter the number of times you want to call the function"<<endl;
    cin>>n;
    for(j=1;j<=n;j++)
    {
    cout<<"Enter the value of a and b\n";
    cin>>a>>b;          
    answer=power(a,b);                          //function call                     
    cout<<"The answer is: "<<answer<<endl;  
    }

}
int power(int number1 , int number2)        //function definition
{
    // int answer=1,i;                      //using loop
    // for(i=1;i<=number2;i++){
    //     answer=answer*number1;
    // }
        int answer=pow(number1,number2);       //using built in functions
    return answer;
    }




