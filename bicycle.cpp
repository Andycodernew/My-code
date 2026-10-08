#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,ans=0;
    cin>>n;
    long long a[2*n+1];
    for(int i=0;i<2*n;i++) cin>>a[i];
    sort(a,a+2*n);
    int j=2*n-1;
    for(int i=0;i<n;i++) ans=max(ans, a[i]+a[j-i]);
    cout<<ans;
}
