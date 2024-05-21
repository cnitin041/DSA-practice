#include<iostream>
using namespace std;

bool prime(int a){
    if(a==2)return 1;//edge cases
    if(a<2)return 0;
    if (a%2==0)return 0;
    for(int i=3;i<a/2;i++){
        if(a%i==0){
            return 0;
            
        }
        
        
    }return 1;
}
int main(){
    int a;
    cout<<"Enter the int :-"<<endl;
    cin>>a;
    if(prime(a)){
        cout<<"prime"<<endl;
    }
    else{
        cout<<"not prime ";
    }

}