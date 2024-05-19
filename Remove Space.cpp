#include<iostream>
#include<string>
using namespace std;

int main(){
    string og="nitin kumar";
    string edited="";

    for(char chara:og){
        if(chara != ' '){
            edited+=chara;
        }
    }
    cout<<"Orignal "<<og<<endl;
    cout<<"Without spaces "<<edited;


    return 0;
}
