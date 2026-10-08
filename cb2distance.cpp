#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x1,x2,y1,y2;
    cin>>x1>>y1>>x2>>y2;
    double m=abs(x1-x2)+abs(y1-y2);
    double e=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    cout<<setprecision(2)<<fixed<<m<<endl;
    cout<<setprecision(2)<<fixed<<e;
}