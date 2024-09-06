   #include<iostream>
   using namespace std;
   int main()
   {
//    to print the pattern
//see how all the square shaped patterns have similar conditions for initialization and while condition
//    the output contains the respective columns where it is so we print j that is columns
// 1234
// 1234
// 1234
// 1234
   int a;
   cout<<"Enter the value of n\n";
    cin>>a;
    int i=1;
    while(i<=a)
    {
        int j=1;
        while(j<=a)
        {
            cout<<j;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }

//  to print the pattern
//see how all the square shaped patterns have similar conditions for initialization and while condition
//  the output contains the oppsoite values of the above pattern so we use formula (a-n+1)
//  where a is total no. of items n is our no. of columns(j)
// 4321
// 4321
// 4321
// 4321
    int n;
   cout<<"Enter the value of a\n";
    cin>>n;
    int m=1;
    while(m<=a)
    {
        int n=1;
        while(n<=a)
        {
            cout<<a-n+1;
            n=n+1;
        }
        cout<<endl;
        m=m+1;
    }

   }
