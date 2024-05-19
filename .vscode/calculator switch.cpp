#include <iostream>
#include <vector>

using namespace std;

int main(){
    int a,b;
    cout<<"Enter the first number ";
    cin>>a;
    cout<<"Enter the second number ";
    cin>>b;

    char op;
    cout<<"enter the operator ";
    cin>>op;
    int t;



    switch(op){
        case '+':
        t=a+b;
        break;
        case '-':
        t=a-b;
        break;
        case '*':
        t=a*b;
        break;
        case '%':
        t=a%b;
        break;
        case '/':
        t=a/b;
        break;


        default:
        cout<<"enter a valid operator"<<endl;



    }

    cout<<"The Answere is ="<<" "<<t;
    return 0;


}