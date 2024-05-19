#include<iostream>
#include<string>
using namespace std;

//to get input in array

int getarray(int arr[],int n){
  for (int i=0;i<n;i++){
    cin>>arr[i];
  }
  return 0;
}

//to print array

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
  
  

}