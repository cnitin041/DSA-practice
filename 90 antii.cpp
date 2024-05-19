#include<iostream>
using namespace std;

int main(){

    int a,b;
    cin>>a>>b;
    int arr[a][b];
    int arr1[b][a];

    

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            cin >> arr[i][j];
        }
    }

cout<<"Entered array \n";
    for (int i = 0; i < b; i++) {
        for (int j = 0; j < a; j++) {
            cout << arr[j][i] << " ";
        }
        cout<<"\n";
        
    }



    
cout<<"90 clockwise \n";
     for (int i = 0; i < b; i++) {
        for (int j = a-1; j >=0; j--) {
            cout << arr[j][i] << " ";
        }
        cout << "\n";
    }



cout<< "90 anti clockwise \n";
for (int i = b-1; i >=0; i--) {
        for (int j = 0; j <a; j++) {
            cout << arr[j][i] << " ";
        }
        cout << "\n";
    }
}