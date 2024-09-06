#include<iostream>
using namespace std;

void record(int arr[]);
int main()
{
    int arr[5]={1,2,3,4,5};
    record(arr);
    return 0;

}
void record(int arr[5])
{
    int sum=0;
    for(int i=0;i<5;i++)
    {
       arr[i]++;
    cout<<"New array is: "<<arr[i]<<endl;
    }
}