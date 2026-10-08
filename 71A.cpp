#include <iostream>
#include <string>
using namespace std;

int n,a;
string s,b;

int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s;
        if(s.size()<=10) cout<<s<<endl;
        else{
            a=s.size()-2;
            s.erase(1, a);
            cout<<s.insert(1, to_string(a))<<endl;
        }
    }
}