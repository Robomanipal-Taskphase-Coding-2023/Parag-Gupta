#include <iostream>
using namespace std;
int main()
{
  int num1,num2,i,sum1=0,sum2=0,x,y;
  cout<<"Enter the first number: ";
  cin>>num1;
  cout<<"Enter the second number: ";
  cin>>num2;
  x= num1;
  y= num2;
for (i=1 ; i<num1 ; i++)
  {
    if (num1%i==0)
      sum1=sum1+i;
  }
for (i=1 ; i<num2 ; i++)
  {
    if (num2%i==0)
      sum2=sum2+i;
  }
if (sum1==num2 && sum2==num1)
    cout<<"The entered numbers are amicable";
else
    cout<<"The entered numbers are not amicable";
return 0;
}