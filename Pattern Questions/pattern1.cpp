#include<iostream>
using namespace std;
int main(){
    cout<<"enter"<<endl;
    int a,b;
    cin>>a;
    cin>>b;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}