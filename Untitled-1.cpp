#include<iostream>
using namespace std;

void rangee(int a, int b) {
    // Determine the maximum possible size of the array
    int maxSize = (b - a) / 2 + 1;
    int arr[maxSize];
    int count = 0;

    // Populate the array with even numbers in the range [a, b)
    for (int i = a; i < b; i++) {
        if (i % 2 == 0) {
            arr[count] = i;
            count++;
        }
    }

    // Print the elements of the array
    for (int i = 0; i < count; i++) {
        cout << arr[i] << endl;
    }
}

int main() {
    int a, b;
    cout << "Enter the numbers 1st and nth: ";
    cin >> a >> b;
    rangee(a, b);
    return 0;
}
