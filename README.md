# Multidimentional Array

## AIM
To study and implement 2 Dimensional arrays in C++

## Software required
VS code, dev cpp, online complier.

## Theory
A 2D array is a data structure that with a grid, where each element is identified by two indices: a row index and a column index.  

```cpp
int matrix[3][4] = {
    {1, 2, 3, 4},
    {5, 6, 7, 8},
    {9, 10, 11, 12}
};
```

**Uses of 2D Arrays:**  

 * Used in applications including computer graphics, image processing.
 * Used  in scientific simulations, spreadsheets.
 * Used in mathematical representation of matrix.
   eg-
   
 | 1 | 2 | 3 |
|---|---|---|
| 4 | 5 | 6 |
| 7 | 8 | 9 |

# Algorithm

## Display the Matrices.

1. **Start**

2. **Input:**
   - Ask user to enter the number of rows (`r`).
   - Prompt user to enter the number of columns (`c`).

3. **Initialize:**
   - Create a 2D array `arr[r][c]`.

4. **Input Elements:**
   - For each row `i` from 0 to `r-1`:
     - For each column `j` from 0 to `c-1`:
       - Ask user to enter the element at position `(i+1, j+1)`.
       - Store the entered value in `arr[i][j]`.

5. **Display Matrix:**
   - For each row `i` from 0 to `r-1`:
     - For each column `j` from 0 to `c-1`:
       - Print `arr[i][j]` followed by a space.
     - Print a newline after each row.

6. **End**

# codes:
**2D array:

//Gayatri Ratnaparkhi

//PRN:23070123169

#include<iostream>

using namespace std;

int main() {

    int i, j, r, c;
    
    cout << "Enter number of rows: " << endl;
    
    cin >> r;
    
    cout << "Enter number of columns: " << endl;
    
    cin >> c;
    
    int arr[r][c];  
    
    for(i = 0; i < r; i++) {
    
        for(j = 0; j < c; j++) {
        
            cout << "Enter element at position (" << i+1 << ", " << j+1 << "): ";
            
            cin >> arr[i][j];
            
        }
        
    }
    
    cout << "The array elements are: " << endl;
    
    for(i = 0; i < r; i++) {
    
        for(j = 0; j < c; j++) {
        
            cout << arr[i][j] << " ";
            
        }
        
        cout << endl; 
        
    }
    

    return 0;
    
}

/*

**output**

    Enter number of rows:
    
2

Enter number of columns:

2

Enter element at position (1, 1): 4

Enter element at position (1, 2): 7

Enter element at position (2, 1): 8

Enter element at position (2, 2): 5

The array elements are:

4 7

8 5

*/

**Array addition**

//Gayatri Ratnaparkhi

//PRN:23070123169

#include<iostream>

using namespace std;

int main() {

    int i, j, r1, c1, r2, c2;

    cout << "Enter number of rows of first matrix: " << endl;
    
    cin >> r1;
    
    cout << "Enter number of columns of first matrix: " << endl;
    
    cin >> c1; 
    
    cout << "Enter number of rows of second matrix: " << endl;
    
    cin >> r2;
    
    cout << "Enter number of columns of second matrix: " << endl;
    
    cin >> c2;
    
    if(r1 == r2 && c1 == c2) {
    
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
        
            for(j = 0; j < c1; j++) {
            
                c[i][j] = a[i][j] + b[i][j];
                
            }
            
        }   
        
        cout << "The resultant matrix after addition is:" << endl;
        
        for(i = 0; i < r1; i++) {
        
            for(j = 0; j < c1; j++) {
            
                cout << c[i][j] << " ";
                
            }
            
            cout << endl;

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

Element at (1, 2): 7

Element at (2, 1): 8

Element at (2, 2): 3

Enter elements of the second matrix:

Element at (1, 1): 2

Element at (1, 2): 1

Element at (2, 1): 5

Element at (2, 2): 3

The resultant matrix after addition is:

6 8

13 6

*/

**Matrix multipilcation**

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

**Transpose of matrx**

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

## Conclusion:
we have studied and implimented multidimensional array. 
    
