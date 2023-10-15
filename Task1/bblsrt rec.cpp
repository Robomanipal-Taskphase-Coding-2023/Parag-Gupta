#include<iostream>
using namespace std;
void bblsrt(int arr[], int l, int i)
{
    if(i==l-1)
        return;
    int temp;
    for(int j=0;j<l-i-1;j++)
    {
        if(arr[j]>arr[j+1])
        {
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
    bblsrt(arr,l,i+1);
}
int main()
{
  int n;
  cout<<"Enter the size of array: ";
  cin>>n;
  int arr[n];
  cout<<"Enter the array elements:\n";
  for(int i=0;i<n;i++)
      cin>>arr[i];
   bblsrt(arr,n,0);
  cout<<"Sorted Array: \n";
  for(int i=0;i<n;i++)
      cout<<arr[i]<<" ";
      cout<<endl;  
 return 0;
}