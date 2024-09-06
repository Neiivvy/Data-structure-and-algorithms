#include<iostream>.

using namespace std;
int getMax(int array[], int n){
    int max=array[0];
    for(int i=0;i<n;i++)
    {
        if (array[i]>max)
        {
            max=array[i];
        }
    }
    return max;
}


int getMin(int a[],int n)
{
    int min=a[0];
       for(int i=0;i<n;i++) 
    {
        if (a[i]<min)
        {
            min=a[i];
        }
    }
    return min;

}

int main()
{
    int size,array[11];
    cout<<"Enter the size of array\n";
    cin>>size;
    cout<<"Enter the numbers\n";
    for(int i=0;i<size;i++)
    cin>>array[i];

    cout<<"Maximum value is: "<<getMax(array,size)<<endl;
    cout<<"Minimum number is: "<<getMin(array,size);
}