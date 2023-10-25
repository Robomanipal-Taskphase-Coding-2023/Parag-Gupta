#include <iostream>
using namespace std;
int main()
{
    int i, j, m = 0, n = 0, X, Y;
    cout << "Enter the dimension of the matrix: ";
    cin >> X >> Y;
    int arr[X][Y], res[X][Y];
    cout << "Enter the elements:\n";
    for (i = 0; i < X; i++)
    {
        for (j = 0; j < Y; j++)
            cin >> arr[i][j];
    }
    cout << "The resultant matrix is:\n";
    for (i = 0; i < X; i++)
    {
        for (j = 0; j < Y; j++)
        {
            if (arr[i][j] == 0)
            {
                while (m < X and n < Y)
                {
                    arr[i][n++] = 0;
                    arr[m++][j] = 0;
                }
            }
        }
    }
    for (i = 0; i < X; i++)
    {
        for (j = 0; j < Y; j++)
            cout << arr[i][j] << "\t";
        cout << endl;
    }
}