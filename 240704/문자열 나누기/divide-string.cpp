#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    string s;
    string ll="";
    for(int i=0;i<n;i++){
        cin>>s;
        ll+=s;
    }
    for(int i=0;i<ll.length();i++){
        cout<<ll[i];
        if((i+1)%5==0){
            cout<<"\n";
        }
        
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}