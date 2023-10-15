#include <iostream>
using namespace std;
int binsrch(int arr[],int element,int m,int n)
{
  if (m <= n) 
    {
    int mid = m + (n - m) / 2; 
    if (arr[mid] == element)
      return mid; 
    else if (arr[mid] > element) 
      return binsrch(arr,element,m,mid - 1);
    else
      return binsrch(arr,element,mid + 1,n);
    }
  return -1;
}
int main() {
int arr[100],x,i,element;
cout << "Enter the number of elements: ";
cin >> x;
for (i=0;i<x;i++)
  {
  cout<< "Enter the element: ";
  cin >> arr[i];
  }
cout << "Enter the element to search for: ";
cin >>element;
int result = binsrch(arr,element,0, x - 1);
if (result != -1)
  cout << "Element " << element << " found at index " << result << endl;
else 
  cout << "Element " << element << " not found in the array." << endl;
return 0;
}
