#include <iostream>
using namespace std;
int main() {
    int n,count=0;
    bool sa=true;
    for(int i=0;i<5;i++){
        cin>>n;
        if(n%3!=0){
            count++;
        }

    }
    if(count==0){
        cout<<1;
    }
    else{
        cout<<0;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}