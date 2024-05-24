#include<iostream>
using namespace std;

//binary search
int bs(int arr[],int n,int k){
    int start = 0;
    int end = n-1;
    int mid=start+(end+start)/2;//to avoid over flow

    while(start<=end){
        if(arr[mid]==k){
            return mid;
           
        }
        if(k>arr[mid]){
            start=mid+1;
             
        }
        else{
            end=mid-1;
           
        }

        int mid=start+(end+start)/2;
    }

    return -1;

}

int main(){
    int arr[5]={1,2,3,5,7};
    int index=bs(arr,5,5);
    cout<<index;
}