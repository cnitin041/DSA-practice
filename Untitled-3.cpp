#include<iostream>
using namespace std;
int main(){
    int a,b;

    cin>>a>>b;
    int arr[a][b];


    for (int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cin>>arr[i][j];
        }
    }

    cout<<"orignal array"<<endl;


    for (int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cout<<arr[i][j]<<" ";
        }
    cout<<endl;
    }


     for (int i=0;i<b;i++){
        for(int j=0;j<a;j++){
            cout<<arr[j][i]<<" ";
        }
    cout<<endl;
    }

    cout<<"try"<<endl;

    for (int i=b-1;i >=0 ;i--){
        for(int j=0;j<a;j++){
            cout<<arr[j][i]<<" ";
        }
    cout<<endl;
    }






    cout<<"sprirall";

    int y=0, z=0,n=a,m=b,i=0,j=0,r=0,w=0;
    //for( n=a-1, m=b-1; n>=0,m>=0 ; n--,m--)
    while(r<4)
    { 
       switch(y)
       {
            case 0:
            { 
                for(i=z;i<n;i++)
                {cout<<arr[i][j]<<' ';}  r++; z++; y++; i--; break;
            } 
            case 1:
            {   
                for(j=z;j<m;j++)
                {cout<<arr[i][j]<<' '; } n=n-2; r++; y++; j--;break;
            } 
            case 2:
            { 
                for(i=n;i>=w;i--)
                {cout<<arr[i][j]<<' '; }   m=m-2;r++; y++;i=w;break;
            } 
            case 3:
            { 
                for(j=m;j>=z;j--)
                {cout<<arr[i][j]<<' ';}    y=0; z++; r++; j--; break;
            } 

       }

       

   }


   
}