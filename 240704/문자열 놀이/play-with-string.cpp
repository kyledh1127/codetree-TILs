#include <iostream>
using namespace std;
int main() {
    string s;
    int num;
    cin>>s>>num;
    for(int i=0;i<num;i++){
        int a;
        cin>>a;
        if(a==1){
            int n1,n2;
            cin>>n1>>n2;
            char k= s[n1-1];
            s[n1-1]=s[n2-1];
            s[n2-1]=k;
            cout<<s<<"\n";
        }
        else{
            char s1,s2;
            cin>>s1>>s2;
            for(int j=0;j<s.length();j++){
                if(s[j]==s1){
                    s[j]=s2;
                }
            }
            cout<<s<<"\n";
        }
    }
    
    // 여기에 코드를 작성해주세요.
    return 0;
}