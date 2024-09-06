   #include<iostream>
   using namespace std;
   int main()
   {
    //to print the output
// ABCD
// EFGH
// IJKL
// MNOP
    int a;
    char count='A';
    cout<<"Enter the value of a\n";
    cin>>a;
    int i=1;
    while(i<=a)
    {
        int j=1;
        while(j<=a)
        {
            cout<<count;
             count=count+1;
                 j=j+1;
        }
        cout<<endl;
        i=i+1;
       
    }

    //to print the pattern
// ABCD
// BCDE
// CDEF
// DEFG
    int n;
    cout<<"Enter the vale of n\n";
    cin>>n;
    int row=1;
    while(row<=n)
    {
        int col=1;
        while(col<=n)
        {
            char ch='A'+row+col-2;
            cout<<ch;
            col=col+1;

        }
        cout<<endl;
        row=row+1;
    }
}
   