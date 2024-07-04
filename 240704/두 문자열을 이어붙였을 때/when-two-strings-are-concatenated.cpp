#include <iostream>
using namespace std;
int main() {
    string a,b;
    cin>>a>>b;
    string bl="true";
    string s1=a+b;
    string s2=b+a;

    for(int i=0;i<s1.length();i++){
        if(s1[i]!=s2[i]){
            bl="false";
        }
    }
    cout<<bl;
    // 여기에 코드를 작성해주세요.
    return 0;
}