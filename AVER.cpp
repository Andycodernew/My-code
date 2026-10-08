#include<bits/stdc++.h>
using namespace std;

int a,b,c,s;
int main(){
    cin>>a>>b>>c;
    if(a==(b+c)/2){
        cout<<b<<" "<<c;
    }
    else
    if(b==(a+c)/2){
        cout<<a<<" "<<c;
    }
    else
    if(c==(a+b)/2){
        cout<<a<<" "<<b;
    }
    else{
        cout<<-1;
    }
}
