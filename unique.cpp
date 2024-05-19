#include<iostream>
#include<string>
using namespace std;

void print(int aa[],int size){
    for(int i=0;i<size;i++){
        cout<<aa[i];
    }
}

int unique(int aa[],int size){
    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^aa[i];
    }
    cout<<ans;
    return ans;
}

int main(){
    int arr[7]={1,2,1,3,5,2,3};

    
    unique(arr,7);
}