#include<iostream>
using namespace std;

int iseven(int n){
    if(n%2==0){
        return 1;
    }
    else{
        return 0;
    }  

}
int main(){
    int a,b,c;
    int sum,avg;
    cout<<"enter 3 numbers";
    cin>>a>>b>>c;
    sum=a+b+c;
    avg=sum/3;
    cout<<avg<<endl;

    if(iseven(avg)){
        cout<<"avg is a even number"<<avg<<endl;
    }
    else{
        cout<<"not a even avg"<<avg<<endl;
    }

}