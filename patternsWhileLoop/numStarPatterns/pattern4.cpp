   #include<iostream>
   using namespace std;
   int main()
   {

    
//  to print the pattern
//see how all the square shaped patterns have similar conditions for initialization and while condition
//here the output is printed incrementing the initial count by 1

// 0       1       2       3
// 4       5       6       7
// 8       9       10      11
// 12      13      14      15
   int a;
   int count = 0;
   cout<<"Enter the value of a\n";
    cin>>a;
    int i=1;
    while(i<=a)
    {
        int j=1;
        while(j<=a)
        {
            cout<<count<<"\t";
            count=count+1;
            // count=count+2;  //for incrementing the count by 2
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
   }