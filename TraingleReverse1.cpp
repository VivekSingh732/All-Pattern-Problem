#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter The Size of Pattern"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j>=i){
            cout<<"* ";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}