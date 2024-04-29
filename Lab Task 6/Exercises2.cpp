#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    // Prompt the user for the dimensions of the array
    cout << "Enter the number of rows (not more than 3): ";
    cin >> rows;
    if (rows > 3) {
        cout << "Number of rows exceeds maximum allowed (3). Exiting program.\n";
        return 1;
    }

    cout << "Enter the number of columns (not more than 3): ";
    cin >> cols;
    if (cols > 3) {
        cout << "Number of columns exceeds maximum allowed (3). Exiting program.\n";
        return 1;
    }

    // Dynamically allocate memory for the 2D array
    double **arr = new double *[rows];
    for (int i = 0; i < rows; ++i) {
        arr[i] = new double[cols];
    }

    // Assign values to each element of the array
    cout << "Enter the values for the array:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Enter value for element (" << i << ", " << j << "): ";
            cin >> arr[i][j];
        }
    }

    // Output the values of each element of the array
    cout << "The array values are:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Deallocate memory for the 2D array
    for (int i = 0; i < rows; ++i) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
