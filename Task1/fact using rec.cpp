#include <iostream>
using namespace std;
long factorial (int n)
{
  if (n == 0)
    return 1;
  else 
    return (n* factorial (n-1));
}
int main()
{
int num,fact;
cout<<"Enter a non negative number:\t";
cin>>num;
if (num<0)
  cout<<"Thee entered number is negative.\n";
else
{
  fact = factorial (num);
  cout<<"The factorial of "<<num<<" is "<<fact<<endl;
}
return 0;
}