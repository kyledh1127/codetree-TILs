#include <iostream>
using namespace std;
int main() {
    int n;
    bool sa=true;
    for(int i=0;i<5;i++){
        cin>>n;
        if(n%3!=0){
            sa=false;
            cout<<0;
        }

    }
    if(sa=true){
        cout<<1;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}