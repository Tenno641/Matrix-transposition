#include <iostream>
using namespace std;

int main() {
    
    //Initialising the matrix
    int rows, cols;
    cout << "Enter the size of the matrix\n";
    cin >> rows >> cols;
    // Matrix inputs
    int arr[rows][cols];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }
    return 0;
}