#include <iostream>
using namespace std;
int main()
{
  int i,sum,num,rd;
  cout<<"Enter the number:";
  cin>>num;
  sum=0;
  while(num>0)
    {rd=num%10;
    sum=sum+rd;
    num=num/10;}
  cout<<"Sum of digits:"<<sum;
  return 0;
}  