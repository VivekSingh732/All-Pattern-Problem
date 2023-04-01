#include<iostream>
using namespace std;
int main(){
     int n;
    cout<<"Enter the Patter Size"<<endl;
    cin>>n;
    int space=2*(n-1);
    for(int i=1;i<=n;i++){
        for(int j=n;j>=i;j--){
          char ch='A'+n-j;
          cout<<ch;
        }
      cout<<endl;
     
    }
}