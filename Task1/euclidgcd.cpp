#include <iostream>
using namespace std;
int euclidgcd(int x,int y)
{
if(y==0)
  return x;
return euclidgcd(y,x%y);
}
int main()
{
int x,y;
cout<<"Enter two numbers: \n";
cin>>x>>y;
cout<<"The greatest common divisor is "<< euclidgcd(x,y);
return 0;
}
