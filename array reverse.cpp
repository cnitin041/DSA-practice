#include<iostream>
#include<string>
using namespace std;

void reverse(int arr[],int n){
    int start=0;
    int end=n-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    for(int i=0;i<n;i++){
    cout<<arr[i];

  }
}
int printarray(int arr[],int n){
  for(int i=0;i<n;i++){
   // cout<<arr[i];

  }
  return 0;

}


int main(){
    int arr[6]={1,2,4,5,6,7};
    for(int i=0;i<6;i++){
       // cout<<arr[i];
    }

    reverse(arr,6);

    
}