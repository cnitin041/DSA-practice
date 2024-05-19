#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int arr[a][b];
    int t=0;
    int bo=a-1;
    int l=0;
    int r=b-1;

    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cout<<arr[i][j]<<" ";
        }
    cout<<endl;    
    }

    while(t<=bo && l<=r){
        for(int i=l;i<=r;i++){
            cout<<arr[t][i]<<" ";
        }
        cout<<endl;
        t++;
        
        for(int i=t;i<=bo;i++){
            cout<<arr[i][r]<<" ";
        }
        r--;
        

        if(t<=bo){
            for(int i=r;i>=l;i--){
                cout<<arr[bo][i]<<" ";
            }
            bo--;
            
        if(l<=r){
            for(int i=bo;i>=t;i--){
                cout<<arr[i][l]<<" ";
            }
            
            l++;    
            
            
        }


    }
}
}