//Gayatri Ratnaparkhi
//PRN:23070123169
#include <iostream>
using namespace std;

int main() {
 int i, j, r, c;
 int B[3][3];
    cout << "Enter number of rows: ";
    cin >> r;
    cout << "Enter number of columns: ";
    cin >> c;
    if (r != c) {
        cout << "Matrix is not a square matrix." << endl;
        return 0;
    }
    int A[r][c];
   
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            cout << "Enter element at position (" << i+1 << ", " << j+1 << "): ";
            cin >> A[i][j];
        }
    }
cout << endl;
cout << "The Tranpose of matrix is: "<<endl;
for(int i = 0;i<3;i++)
{
    for(int j = 0;j<3;j++)
    {
        B[i][j] = A[j][i];
        cout << B[i][j] << " ";
    }
    cout << endl;
}

    return 0;
}
/*
 **output**
Enter number of rows: 2
Enter number of columns: 2
Enter element at position (1, 1): 3
Enter element at position (1, 2): 4
Enter element at position (2, 1): 5
Enter element at position (2, 2): 6

The Tranpose of matrix is:
3 5 -1
4 6 -1
5 -1 0
*/
