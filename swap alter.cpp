#include<iostream>
#include<string>
using namespace std;

void print(int aa[],int size){
    for(int i=0;i<size;i++){
        cout<<aa[i];
    }
}
void swapp(int aa[],int size){
    for(int i=0;i<size;i+=2){
        if(i+2<size){
            swap(aa[i],aa[i+1]);
        }
    }
}

int main(){
    int arrr[6]={1,3,5,7,9,2};
    swapp(arrr,6);
    print(arrr,6);
}