#include <iostream>
#include <string>
using namespace std;

string s;
int n,d,cnt[256]={0};

int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s;
        for(int j = 0; j < s.size(); j++){
            cnt[s[j]]++;
        }
        if(cnt[31]>=2) d++;
    }
    cout<<d;
}