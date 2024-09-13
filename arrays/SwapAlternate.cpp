#include<iostream>
using namespace std;
// function for alternate swapping
//in alternate swappping we swap adjacent elements(elements next to each other from start)
void Alternate(int arr[],int size){
    for(int i=0;i<size;i+=2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
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
    Alternate(a,n);     //function call
      cout<<"Required array is\n";
    for(int i=0;i<n;i++)
    cout<<a[i]<<endl;
    return 0;
}
//for eg:
// for size odd:: if array[5]={1,2,3,4,5}  //output array[5]={2,1,4,3,5}
// for size even:: if array[6]={1,2,3,4,5,6}  //output array[6]={2,1,4,3,6,5}
