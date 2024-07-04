#include <iostream>
using namespace std;
int main() {
    string s;
    cin>>s;
    int len= s.length();
    for(int i=len-1;i>=0;i--){
        if(i%2==1){
            cout<<s[i];
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}