#include <bits/stdc++.h>
using namespace std;

long long work(long long n){
    long long k=1;
    long long s=0;
    while(s<n){
        s+=k;
        if(s==n){
            return k;
        }
        k++;
    }
    return -1;
}
int main(){
    long long x;
    cin>>x;
    if(work(x)!=-1) cout<<work(x);
    else cout<<"NO";
}
