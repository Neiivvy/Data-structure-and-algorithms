#include<iostream>
using namespace std;
//function for sum
int sumArray(int array[],int size)      
{
    int sum=0;
    for(int i=0;i<size;i++)
    {
        sum=sum+array[i];
    }
    return sum;

}
//function for product
int mulArray(int array[],int size)      
{
    int mul=1;
    for(int i=0;i<size;i++)
    {

        mul=mul*array[i];
    }
    return mul;

}
int main()
{
    int n,a[7],sum,mul;
    cout<<"Enter the size of array\n";
    cin>>n;
    for(int i=0;i<n;i++)
    cin>>a[i];
    sum=sumArray(a,n);
    mul=mulArray(a,n);
    cout<<"sum is :"<<sum<<endl;
      cout<<"product is :"<<mul<<endl;


}