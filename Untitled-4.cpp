#include<iostream>
#include<string>
using namespace std;
//print
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
//input
void get(int arr[],int n){
     for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}
//reverse 
void reverse(int arr[],int s){
    int st=0;
    int ed=s-1;
    while(st<ed){
        swap(arr[st],arr[ed]);
        st++;
        ed--;
    }
}
int dt(int arr[],int s){
   int ans=0;
    for(int i=0;i<s;i++){
        ans=ans^arr[i];
    }
    for (int i=0;i<s;i++){
        ans=ans^i;
    }
    cout<<ans;
    return ans;
}

void sun(int arr[],int s){
    int sum=0;
    for(int i=0;i<s;i++){
        sum+=arr[i];

    }
    cout<<sum<<endl;
}
void del(int arr[],int s){
    
}
int main(){
    int a,n;
    cout<<"enter<s";
    cin>>a;

    int arr[a];
    get(arr,a);
    //reverse(arr,a);
    print(arr,a);
    //dt(arr,a);
    sun(arr,a);
    
}