#include <iostream>
using namespace std;

int main() {
    string s,k;
    cin>>s>>k;
    for(int i=0;i<k.length();i++){
        
        int len=s.length();
        if(k[i]=='L'){
            s=s.substr(1,len-1)+s.substr(0,1);
   
        }
        if (k[i] == 'R') {
            s = s[len - 1] + s.substr(0, len - 1); // 문자열의 마지막 문자를 앞으로 이동
            
        }
       
    }
    cout<<s;
    // 여기에 코드를 작성해주세요.
    return 0;
}