#include<iostream>
#include<vector>
using namespace std;

vector<int> rangee(int a, int b) {
    vector<int> arr;
    for (int i = a; i < b; i++) {
        if (i % 2 == 0) {
            arr.push_back(i);
        }
    }
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << endl;
    }
    return arr;
}

int main() {
    int a, b;
    cout << "Enter the numbers 1st and nth: ";
    cin >> a >> b;
    rangee(a, b);
    return 0;
}
