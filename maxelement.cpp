#include<iostream>

using namespace std;


//1 2 3 2 1 2 3

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
int maxii(int arr[],int n){
  int max=-1;
  int count;
  
  shortt(arr,n);
  for(int i=0;i<n;i++){
    cout<<arr[i];

  }

  for(int i=0;i<n;i++){
    if(arr[i]==arr[i+1]){
      count++;
      max=count;
      cout<<count;
    }
    i++;

  }
  cout<<"ans"<<max;


  
}
int getarray(int arr[],int n){
  for (int i=0;i<n;i++){
    cin>>arr[i];
  }
  return 0;
}
int printarray(int arr[],int n){
  for(int i=0;i<n;i++){
    cout<<arr[i];

  }
  return 0;
  
}
int main(){
  int n;
  cin>>n;
  int arr[n];
  getarray(arr,n);
  printarray(arr,n);
  maxii(arr,n);
  
  

}