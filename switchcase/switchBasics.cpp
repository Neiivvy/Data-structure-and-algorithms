#include<iostream>
using namespace std;
int main()
{

  int num = 9;
    char ch='n';
    //integer and characters can be used in switchcase parameters
  switch(num){
    case 1: cout<<"first"<<endl;
    break;
    case 2: cout<<"second"<<endl;
    break;
    case 9: switch(ch)
    {
      case 'n': cout<<"The character is n"<<endl;
      cout<<"This is the nested switch case"<<endl;
    break;
    }
    break;
    default: cout<<"It is the default case"<<endl;
  }

  //using expression in switch case
  switch(18/2)
  {
    case 9: cout<<"The number is 9"<<endl;
  }

  cout<<endl;
  return 0;
}