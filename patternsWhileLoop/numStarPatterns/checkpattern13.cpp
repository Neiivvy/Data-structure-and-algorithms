#include<iostream>
using namespace std;
int main()
{

    //check the pattern 
    //to print pattern
    //1234
    // 234
    //  34
    //   4
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int space=i-1;
        while(space)
        {
            cout<<" ";
            space=space-1;
        }
        int j=1;
        while(j<=n-i+1)
        {
            int count=j;
            cout<<count;
            count=count+1;
            j=j+1;

        }
        cout<<endl;
        i=i+1;
    }
}