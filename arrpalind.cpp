#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,t=1;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++){
        if(a[i]!=a[n-t]){
            cout<<"NO";
            return 0;
        }
        t++;
    }
    cout<<"YES";
}