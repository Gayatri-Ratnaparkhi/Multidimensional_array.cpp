//Gayatri Ratnaparkhi
//PRN:23070123169
#include<iostream>
using namespace std;
int main() {
    int i, j,k, r1, c1, r2, c2;
    
    cout << "Enter number of rows of first matrix: " << endl;
    cin >> r1;
    cout << "Enter number of columns of first matrix: " << endl;
    cin >> c1; 
    cout << "Enter number of rows of second matrix: " << endl;
    cin >> r2;
    cout << "Enter number of columns of second matrix: " << endl;
    cin >> c2;
    
    if(c1 == r2) {
        int a[r1][c1];
        int b[r2][c2];
        int c[r1][c1];
        
        cout << "Enter elements of the first matrix:" << endl;
        for(i = 0; i < r1; i++) {
            for(j = 0; j < c1; j++) {
                cout << "Element at (" << i+1 << ", " << j+1 << "): ";
                cin >> a[i][j];
            }
        }        
        cout << "Enter elements of the second matrix:" << endl;
        for(i = 0; i < r2; i++) {
            for(j = 0; j < c2; j++) {
                cout << "Element at (" << i+1 << ", " << j+1 << "): ";
                cin >> b[i][j];
            }
        }       
       for(i = 0; i < r1; i++) {
        for(j = 0; j < c2; j++) {
            c[i][j] = 0;
            for(k = 0; k < c1; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
            }
        }       
        cout << "The resultant matrix after multiplication is:" << endl;
        for(i = 0; i < r1; i++) {
        for(j = 0; j < c2; j++) {
            cout << c[i][j] << " ";
            } cout << endl;
            }
        }
    else {
        cout << "Number of rows or columns do not match for matrix addition." << endl;
    }  
    return 0;
}
/*
**output**
Enter number of rows of first matrix:
2
Enter number of columns of first matrix:
2
Enter number of rows of second matrix:
2
Enter number of columns of second matrix:
2
Enter elements of the first matrix:
Element at (1, 1): 4
Element at (1, 2): 3
Element at (2, 1): 6
Element at (2, 2): 2
Enter elements of the second matrix:
Element at (1, 1): 1
Element at (1, 2): 2
Element at (2, 1): 3
Element at (2, 2): 4
The resultant matrix after multiplication is:
13 20
12 20
*/
    
