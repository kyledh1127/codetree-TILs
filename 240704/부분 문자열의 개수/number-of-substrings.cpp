#include <iostream>
using namespace std;
int main() {
    string a,b;
    cin>>a>>b;
    int count=0;
    int share=0;
    for(int i=0;i<a.length();i++){
        if(a[i]==b[0]){
            for(int j=0;j<b.length();j++){
                if(a[i+j]==b[j]){
                    share++;
                }
            }
            if(share==b.length()){
                
                count++;
                
            }
            share=0;
        }
    }
    cout<<count;
    // 여기에 코드를 작성해주세요.
    return 0;
}