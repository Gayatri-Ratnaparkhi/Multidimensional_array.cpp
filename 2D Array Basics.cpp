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
