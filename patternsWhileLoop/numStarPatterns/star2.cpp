#include<iostream>
using namespace std;
int main()
{

    //to print the pattern
//     *
//    **
//   ***
//  ****
// *****
    int n;
    cout<<"Enter the value of n\n";
    cin>>n;
    int i=1;
    while(i<=n)
    {
        //loop for space
        int space= n-i;
        while(space)
        {
            cout<<" ";
            space=space-1;
        }

        //loop for star
        int j=1;
        while(j<=i)
        {
            cout<<"*";
            j=j+1;

        }
        cout<<endl;
        i=i+1;
    }
}