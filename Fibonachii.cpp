#include<iostream>
using namespace std;
int main(){
   int a=0;
   int b=1;
   int c;
   int i=2;
   cout<<a<<b;
   while(i<7){
    c=a+b;
    cout<<c;
    a=b;
    b=c;
    i++;
   }
}