#include <iostream>
using namespace std;

int main() {
    string s;
    int n;
    cin>>s>>n;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        int len=s.length();
        if(num==1){
            s=s.substr(1,len-1)+s.substr(0,1);
            cout<<s<<"\n";
        }
        if (num == 2) {
            s = s[len - 1] + s.substr(0, len - 1); // 문자열의 마지막 문자를 앞으로 이동
            cout << s << "\n";
        }
        if(num==3){
            string reversed_s = "";
            for (int j = len - 1; j >= 0; j--) {
                reversed_s += s[j];
            }
            s = reversed_s;  // 뒤집힌 문자열로 s 업데이트
            cout << s << "\n";
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}