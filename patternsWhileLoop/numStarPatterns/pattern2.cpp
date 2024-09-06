#include<iostream>
using namespace std;
int main()
//to print the pattern 
//see how all the square shaped patterns have similar conditions for initialization and while condition
//the output contains the same no. of row which is in the respective rows where it is so print i that is no. of rows
// 1111
// 2222
// 3333
// 4444
{
    int n;
    cout<<"Enter the value of n\n";
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=1;    
        while(j<=n)
        {
            cout<<i;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }

}