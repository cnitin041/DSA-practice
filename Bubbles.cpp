#include<iostream>
using namespace std;

void shortt(int arr[], int n) {
    // Bubble Sort implementation
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}
int main(){
    int arr[7]={0,1,0,0,1,1,0};
    shortt(arr,7);
    cout<<endl;
    for(int i=0;i<7;i++){
        cout<<arr[i];
    }
}