#include<iostream>
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
    print(arr, a, b);

    // Transpose the array
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < i; j++) {
            swap(arr[i][j], arr[j][i]);
        }
    }

    print(arr, a, b);

     for (int i = 0; i < a/2; i++) {
        for (int j = 0; j < a; j++) {
            swap(arr[i][j], arr[a-1-i][j]);
        }
    }
    print(arr, a, b);

    // Deallocate the dynamically allocated memory
    for (int i = 0; i < a; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
