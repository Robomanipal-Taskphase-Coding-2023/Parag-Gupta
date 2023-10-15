#include <iostream>
using namespace std;
int fibo (int n)
  {
  if (n==1)
    return 0;
  if (n==2)
    return 1;
  return fibo(n-1) + fibo(n-2);
  }
int main()
{
int i;
cout<<"The first 40 terms of the Fibonacci series are:\n";
for(i=1;i<=40;i++)
  cout<< fibo(i)<<"\n";
return 0;
}