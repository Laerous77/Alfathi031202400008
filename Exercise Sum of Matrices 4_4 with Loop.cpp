#include <iostream>
using namespace std;

int main() {
    // Declare and initialize two 4*4 matrices
    int matrix1[4][4], matrix2[4][4], sum[4][4];
    
    // Input elements for matrix 1
    cout << "Enter the elements of Matrix 1:" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << "Element [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matrix1[i][j];
        }
    }
    
    // Input elements for matrix 2
    cout << "\nEnter the elements of Matrix 2:" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << "Element [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matrix2[i][j];
        }
    }
    
    // Sum of matrix 1 and matrix 2
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    
    // Display matrix 1
    cout << "\nMatrix 1:" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << matrix1[i][j] << " ";
        }
        cout << endl;
    }
    
    // Display matrix 2
    cout << "\nMatrix 2:" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << matrix2[i][j] << " ";
        }
        cout << endl;
    }
    
    // Display the sum of the matrices
    cout << "\nSum of Matrix 1 and Matrix 2" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}