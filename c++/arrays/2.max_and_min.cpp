#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    int b[a];
    for(int i=0;i<a;i++){
        cin>>b[i];
    }
    sort(b,b+a);
    cout<<"max ele is "<<b[a-1]<<endl;
        cout<<"min ele is "<<b[0]<<endl;


}