#include<iostream>
using namespace std;
int main(){
     int n;
    cout<<"Enter the Patter Size"<<endl;
    cin>>n;
    int space=2*(n-1);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
          char ch='A'+4+j-1;
            cout<<ch;
        }
      cout<<endl;
     
    }
}