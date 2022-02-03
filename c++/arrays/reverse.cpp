#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    int b[a];
    for(int i=0;i<a;i++){
        cin>>b[i];
    }
    reverse(b,b+a);
    for(int t:b){
        cout<<t<<" ";
    }cout<<endl;
}