#include<iostream>
using namespace std;
int main(){
     int n;
    cout<<"Enter the Patter Size"<<endl;
    cin>>n;
   
    int k=0;
    for(int i=1;i<=n;i++){
        k=1;
        for(int j=1;j<=2*n-1;j++){
           if(j>=n-i+1 && j<=n+i-1){
            char ch='A'+k-1;
             cout<<ch;
             j<n?k++:k--;
           }else{
            cout<<" ";
           }
        }
      cout<<endl;
     
    }
}