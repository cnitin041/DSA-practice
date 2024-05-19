#include<iostream>
using namespace std;
bool pala(char arr[],int length){
    int a=length-1;
    int i=0;
    while(i<a){
        if(arr[i]==arr[a]){
           i++;
           a--;
        }else{
            return false;
        }
         
    }
    return true;
}
int main(){
    int size =5;
    char arr[size];
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    for(int i=0;i<5;i++){
        cout<<arr[i];
    }
    cout<<"\n";
    if(pala(arr,5)){
        cout<<"yesss";
    }
    else{
        cout<<"Nooo!";
    }
    return 0;
    
}