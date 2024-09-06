//IN CASE OF ARRAY we pass the base address of the array when we call the function 
// so any changes made inside the function is reflected into the main function 
//but in case of a variable in function call we pass a copy of that variable so changes made to variable is not reflected into the main function

#include<iostream>
using namespace std;

void arrayNum(int arr[],int n)
{
    cout<<"Iniside array function\n";
    //updating in array function 
    arr[2]=111;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"\t";

    }
    cout<<endl;
    cout<<"Now into the main function\n";

}
int main()
{
    int num[3]={1,1,1};

    arrayNum(num,3);
    //printing array inside main function
    for(int i=0;i<3;i++)
    cout<<num[i]<<"\t";

}