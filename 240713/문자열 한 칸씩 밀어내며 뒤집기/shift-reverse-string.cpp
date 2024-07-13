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
        if(num==2){
            s=s.substr(len-1,1)+s.substr(0,len-1);
            cout<<s<<"\n";
        }
        if(num==3){
            for(int j=(s.length()-1);j>=0;j--){
                cout<<s[j];
            }
            cout<<"\n";
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}