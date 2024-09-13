#include<iostream>
using namespace std;
//function for reverse operation
void reverse(int arr[],int m)
{
    int start=0,end=m-1;
    while(start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}


int main()
{
    int n,a[10];
    cout<<"Enter the size of array\n";
    cin>>n;
    cout<<"Enter the numbers\n";
    for(int i=0;i<n;i++)
    cin>>a[i];
    reverse(a,n);
    cout<<"Reverse of array is\n";
    for(int i=0;i<n;i++)
    cout<<a[i]<<endl;
    return 0;
}