#include <iostream>
using namespace std;
int main() {
    string a,b;
    cin>>a>>b;
    int num=-1;
    int share=0;
    for(int i=0;i<a.length();i++){
        if(a[i]==b[0]){
            for(int j=0;j<b.length();j++){
                if(a[i+j]==b[j]){
                    share++;
                }
            }
            if(share==b.length()){
                cout<<i;
                num=0;
                share=0;
                break;
            }
            
        }
    }
    if(num==-1){
        cout<<-1;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}