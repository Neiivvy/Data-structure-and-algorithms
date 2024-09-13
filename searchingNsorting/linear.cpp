#include<iostream>
using namespace std;
//function for linear search
bool linearSrch(int arr[],int size, int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}
int main()
{
    int n,a[11],key;
    cout<<"Enter the size of array\n";
    cin>>n;
    cout<<"Enter the numbers\n";
    for(int i=0;i<n;i++)
    cin>>a[i];
    cout<<"Enter the element to be searched\n";
    cin>>key;
    //function call
    bool found=linearSrch(a,n,key);
    if(found)
    {
        cout<<"Element is found\n";
    }
    else{
        cout<<"Element not found\n";
    }
    return 0;
}