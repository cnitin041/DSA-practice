#include<iostream>
#include<string>
using namespace std;

bool search(int arr[],int n,int key){
  for(int i=0;i<n;i++){
    if(arr[i]==key){
      return 1;
    }

   
  }
  return 0;
}
int main(){
  int a;
  cout<<"enter the size";
  cin>>a;
  int arr[a];
  for(int i=0;i<a;i++){
    cin>>arr[i];
  }
  for(int i=0;i<a;i++){
    cout<<arr[i];
  }
  cout<<"enter the element"<<endl;
  int k;
  cin>>k;
  
  bool f=search(arr,a,k);
  if (f){
    cout<<"present";

  }
  else{
    cout<<"not";
  }




  
}