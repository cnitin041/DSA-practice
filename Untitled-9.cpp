#include <iostream>
using namespace std;

void print(int** arr, int a, int b) {
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int a, b;
    cin >> a >> b;

    // Dynamically allocate a 2D array
    int** arr = new int*[a];
    for (int i = 0; i < a; i++) {
        arr[i] = new int[b];
    }

    // Read values into the dynamically allocated array
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            cin >> arr[i][j];
        }
    }

    // Print the original array
    cout << "Original Array:" << endl;
    print(arr, a, b);
    cout << endl;

    // Transpose the array
    int** transposedArr = new int*[b];
    for (int i = 0; i < b; i++) {
        transposedArr[i] = new int[a];
    }

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            transposedArr[j][i] = arr[i][j];
        }
    }

    // Print the transposed array
    cout << "Transposed Array:" << endl;
    print(transposedArr, b, a);
    cout << endl;

    // Deallocate the original array
    for (int i = 0; i < a; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    // Deallocate the transposed array
    for (int i = 0; i < b; i++) {
        delete[] transposedArr[i];
    }
    delete[] transposedArr;

    return 0;
}
