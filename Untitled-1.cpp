#include<iostream>
using namespace std;

void sshort(int arr[],int size){
    for(int i=0;i<size-1;i++){
       if(arr[i]>arr[i+1]){
        swap(arr[i],arr[i+1]);
        i++;
       }
       else{
        i++;
       } 
    }
    
}
int main(){
    int arr[3];
    for(int i=0;i<3;i++){
        cin>>arr[i];
    }
     for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }
    
    sshort(arr,3);
    cout<<"shorted array"<<endl;
     for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }
}