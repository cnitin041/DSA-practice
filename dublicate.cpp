#include<iostream>
#include<string>
using namespace std;

void print(int aa[],int size){
    for(int i=0;i<size;i++){
        cout<<aa[i];
    }
}

int dublicate(int aa[],int size){
    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^aa[i];
    }
    for (int i=0;i<size;i++){
        ans=ans^i;
    }
    cout<<ans;
    return ans;
}

int main(){
    int arr[4]={1,2,3,4};

    
    dublicate(arr,4);
}