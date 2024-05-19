#include<iostream>
#include<string>
using namespace std;



int max(int num[],int n){
    int max= INT_MIN ;
    for (int i=0;i<n;i++){
        if(num[i]>max){
            max=num[i];

        }
        

    }

    int max1=max;
    return max1;
}


int main(){
    int num[6]={1,4,3,7,8,3};
    cout<<max(num,6);
   
    
    
}