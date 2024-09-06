#include<iostream>
using namespace std;
int main()
{

//to print the pattern
// 1234554321
// 1234**4321
// 123****321
// 12******21
// 1********1
    //first triangle
    int n;
    cin>>n;
    int i=1;
   
    while(i<=n)
    {
        int j=1;
        while(j<=n-i+1)
        {cout<<j;
            j=j+1;
        }



         //for second triangle(first part)
         int star1=i-1;
         while(star1)
         {
            cout<<"*";
            star1=star1-1;
         } 

         //for second triangle(second part)
         int star2=i-1;
         while(star2)
         {
            cout<<"*";
            star2=star2-1;
         }

         //for last triangle
        
      int start=n-i+1;
      while(start)
      {
        int count=start;
        cout<<start;

        start=start-1;
      }



        cout<<endl;
        i=i+1;
    }
}