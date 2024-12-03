#include <iostream>
using namespace std;

int main() {
    // Declare and initialize two 3*3 matrices
    int matrix1[3][3], matrix2[3][3];
    
    // Input elements for matrix 1
    cout << "Enter the elements of Matrix 1:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Element [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matrix1[i][j];
        }
    }
    
    // Input elements for matrix 2
    cout << "\nEnter the elements of Matrix 2:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Element [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matrix2[i][j];
        }
    }
    
    // Display matrix 1
    cout << "\nMatrix 1:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix1[i][j] << " ";
        }
        cout << endl;
    }
    
    // Display matrix 2
    cout << "\nMatrix 2:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix2[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}