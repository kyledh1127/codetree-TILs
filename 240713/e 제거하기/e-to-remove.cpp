#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]=='e'){
            s.erase(i,1);
            break;
        }
    }
    cout<<s;
    // 여기에 코드를 작성해주세요.
    return 0;
}