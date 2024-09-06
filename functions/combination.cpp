//calculate nCr=n!/(n-r)!*(r)!
#include<iostream>
using namespace std;
int comb(int, int);
//function for factorial
int factorial(int n)
{ 
  int fact=1,i;
  for(i=1;i<=n;i++)
  {
    fact=fact*i;
  }
  return fact;

}
//function for combination
int comb(int n, int r)
{
  int answer,numer,denom;
  numer=factorial(n);                   //function of factorial called
  denom=factorial(r)*factorial(n-r);
  answer=numer/denom;
  return answer;

}



int main()
{
  int n,r;
  cout<<"Enter the value of n and r\n";
  cin>>n>>r;

  cout<<"the answer is : "<<comb(n,r)<<endl;        //function of combiantion called
return 0;

  
}