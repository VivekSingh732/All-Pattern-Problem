#include<iostream>
using namespace std;
int main(){
     int n;
    cout<<"Enter the Patter Size"<<endl;
    cin>>n;
    int k=1;
    for(int i=0;i<n;i++){
        if(i%2==0) k=1;
        else k=0;
        for(int j=0;j<=i;j++){
             cout<<k;
            k=1-k;
        }
        cout<<endl;
    }
}