#include <iostream>
using namespace std;
int main() {
    int n;
    bool sa=true;
    for(int i=0;i<5;i++){
        cin>>n;
        if(i%3!=0){
            sa=false;
        }

    }
    if(sa=false){
        cout<<0;
    }
    else{
        cout<<1;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}