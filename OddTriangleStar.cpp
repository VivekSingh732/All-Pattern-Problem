#include<iostream>
using namespace std;
int main(){
     int n;
    cout<<"Enter the Patter Size"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n+i;j++){
           if(j>=n+1-i && j<=(n-1)+i){
               cout<<"*";
         } else{
            cout<<" ";
        }
    }
    cout<<endl;
  }
}