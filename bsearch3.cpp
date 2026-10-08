#include <bits/stdc++.h>
using namespace std;

const int MaxN=1e6+2;
int a[MaxN];

int main(){
    int n,x;
    cin>>n>>x;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int k=-1;
    int l=0;
    int r=n-1;
    while(l<=r){
        int mid=(l+r)/2;
        if(a[mid]==x){
            k=mid;
            l=mid+1;
        }
        if(x>a[mid]){
            l=mid+1;
        }
        if(x<a[mid]){
            r=mid-1;
        }
    }
    cout << k;
}
