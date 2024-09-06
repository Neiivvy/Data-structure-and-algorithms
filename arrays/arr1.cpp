#include<iostream>
using namespace std;
int main()
{
    //array for int
    //initialization of entire arrry with 0
    
    int a[5]={0};       //this is only possible with 0, for any other number we use for loop 
int i;
    cout<<"Initialization of entire array with 0\n";
for(i=0;i<5;i++)
{
cout<<a[i];
    cout<<"\t";
}
cout<<endl;

int num[5];
cout<<"Initialization of entire array with any other number\n";
for(i=0;i<5;i++)         //using a for loop for any other number       
{
    num[i]=9;
  cout<<num[i]<<"\t";
}
cout<<endl;

//array for char
char firstchar[5]={'n','i','t','t','i'};
for(int i=0;i<5;i++)
{
    cout<<firstchar[i]<<"\t";
}
cout<<endl;

//array for double,float, bool
double firstdouble[4]={2.2,4.2,1.1,1.1};
float firstfloat[4]={2.2,4.2,1.1,3.3};
bool firstbool[4]={true,false,false,true};

// SIZE OF AN ARRAY USING SIZEOF OPERATOR
//using sizeof operator we cannot determine the fix size of an array 
//because for eg: if we have an array of size 5 and we have initialized it to only 3 elements  
//in such case calculating the size of array gives us total size(5) rather than the arrray of size that we initialized

//SO IN CASE:: where the actual size of array is larger and we have initialized lesss elements.. we cannot calculate the actual size of initilaized elements
//using sizeof operator because it always gives us size of total array.
//for this reason..using array in functions we use int size as one of the arguments

int n[3]={9,9,9};
int d[4]={2,2};         //in this case we cannot get the size of the array as 2
int sizea=sizeof(n)/sizeof(int);
cout<<"Size of array n is:\n"<<sizea<<endl;

int sized=sizeof(d)/sizeof(int);
cout<<"Size of array d is:\n"<<sized<<endl;

}