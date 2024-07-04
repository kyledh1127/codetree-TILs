#include <iostream>
using namespace std;
int main() {
    string s;
    cin>>s;
    char len=s[1];
    for(int i=0;i<s.length();i++){
        
        if(s[i]==len){
            s[i]=s[0];
        }
    }
    cout<<s;
    return 0;
}