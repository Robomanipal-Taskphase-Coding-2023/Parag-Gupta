#include <iostream>
using namespace std;
int main()
{
int r1,c1,r2,c2,i,j,k,mat1[100][100],mat2[100][100],fin[100][100]={};
cout << "Enter the number of rows and columns for the first matrix: ";
cin >> r1 >> c1;
cout << "Enter the number of rows and columns for the second matrix: ";
cin >> r2 >> c2;
if (c1 != r2)
  {
  cout << "Matrix multiplication is not possible." << endl;
  return 1;
  }
cout << "Enter the elements of the first matrix..\n" << endl;
for (i=0;i<r1;i++)
  {
  for (j=0;j<c1;j++)
    {
    cout<<"Enter element: ";
    cin >> mat1[i][j];
    }
  }
cout << "Enter the elements of the second matrix..\n" << endl;
for (i=0;i<r2;i++)
  {
  for (j=0;j<c2;j++)
    {
     cout<<"Enter element: ";
     cin >> mat2[i][j];
    }
  }
for (i=0;i<r2;i++)
  {
  for (j=0;j<c1;j++)
    {
      for (k=0;k<c1;k++)
        fin[i][j] += mat1[i][k] * mat2[k][j];
    }
  }
cout << "Result of matrix multiplication:" << endl;
for (i = 0; i < r1; i++)
  {
  for (j = 0; j < c2; j++)
    cout << fin[i][j] << " ";
  cout << endl;
  }
return 0;
}
