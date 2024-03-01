#include <iostream>
using namespace std;
int main() {
    int a1,a2,b1,b2;
    cin>>a1>>a2;
    cin>>b1>>b2;
    if(a1>b1||b1>a1){
        if(a1>b1){
            cout<<"A";
        }
        else{
            cout<<"B";
        }
    }
    else{
        if(a2>b2){
            cout<<"A";
        }
        else{
            cout<<"B";
        }
    }

    // 여기에 코드를 작성해주세요.
    return 0;
}