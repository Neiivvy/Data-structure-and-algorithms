#include<iostream>
using namespace std;
int main()
{
    //declaration of array 
    int number[2];

    //accessing an array from uninitialized array
    cout<<"Value at index 1 is: "<<number[1]<<endl;     //gives any garbage value

    //initializing an array 
    int number1[3]={2,5,7};

    //accessing an array form initialized array
    cout<<"Value at index 2 is: "<<number1[2]<<endl;

    //initializing array with few numbers than it's total size
    int number2[5]={1,2};

    //accessing arary with few initialized numbers
    int i,n=5;
      cout<<"Value at entire array is: "<<endl;
    for(i=0;i<n;i++)                //here except from the initialized part we get garbage value
    {
      cout<<number2[i]<<"\t";
    }
    cout<<endl;


//initialization of entire array with 0(simple)
int array[7]={0};
int j;
cout<<"Array with all values 0\n";
for(j=0;j<7;j++)
{
    cout<<array[j]<<endl;
}


//initialization of array with any same number other than 0(use should use for loop)
int array1[7];
cout<<"Array with all values 3\n";
for(j=0;j<7;j++)
{
    
    array1[j]=3;
    cout<<array1[j]<<endl;
}
}