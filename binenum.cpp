#include <bits/stdc++.h>
using namespace std;

int cntone (int n){
    int cnt=0;
    while(n>0){
        if(n%2==1) cnt++;
        n/=2;
    }
    return cnt;
}
int main(){
    int n,k;
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        if(cntone(i)==k){
            cout<<i<<" ";
        }
    }
    return 0;
}
