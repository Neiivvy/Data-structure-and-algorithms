#include<iostream>
using namespace std;
int main()
{
    //to print the pattern 
// 123456
//  12345
//   1234
//    123
//     12
//      1

    int a;
    cout<<"Enter the value of a\n";
    cin>>a;
    int row=1;
    while(row<=a)
    {
        int space=row-1;
        while(space)
        {
            cout<<" ";
            space=space-1;
        }
        int col=1;
        while(col<=a-row+1)
        {
            cout<<col;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }


    
}