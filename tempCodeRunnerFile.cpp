#include<iostream>
using namespace std;



int bs(int arr[],int n,int k){
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==k){
            return mid;
        }
        else if(arr[mid]>k){
            end=mid-1;
        }
        else{
            start=mid+1;
        }

        mid=start+(end-start)/2;
    }
    return -1;
}

int main(){
    int arr[5]={1,2,3,5,7};
    int index=bs(arr,5,10);
    cout<<index;
}