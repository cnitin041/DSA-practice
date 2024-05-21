#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    for(int i=0;i<a+1;i++){
        for(int j=1;j<=i;j++){
            cout<<" "<<j;
        }
        cout<<endl;
    }
}