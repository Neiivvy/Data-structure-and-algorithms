#include<iostream>
using namespace std;

//function for ascending order
void ascend(int arrr[],int size){
    int temp;
    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){
            if(arrr[i]>arrr[j]){
                temp=arrr[i];
                arrr[i]=arrr[j];
                arrr[j]=temp;

            }
        }
    }
}

///function for descending order
void descend(int arrr[], int size){
    int temp;
    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){
            if(arrr[i]<arrr[j]){
                temp=arrr[i];
                arrr[i]=arrr[j];
                arrr[j]=temp;
            }
        }
    }
}


int main(){
    int i,n,a[11];
    cout<<"Enter the size of array\n";
    cin>>n;
    cout<<"Enter the numebrs\n";
    for(i=0;i<n;i++)
    cin>>a[i];

    //function call for ascending
    ascend(a,n);
    cout<<"Arrays in ascending order is\n";
    for(int i=0;i<n;i++)
    cout<<a[i]<<endl;


//function call for descending
    descend(a,n);
    cout<<"Arrays in descending order is\n";
    for(int i=0;i<n;i++)
    cout<<a[i]<<endl;


}