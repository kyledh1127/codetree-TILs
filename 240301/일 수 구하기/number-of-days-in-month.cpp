#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    if(n<=7){
        if(n%2==1){
            cout<<31;
        }
        else if(n==2){
            cout<<28;
        }
        else{
            cout<<30;
        }

    }
    if(n>=8){
        if(n%2==0){
            cout<<31;
        }
        else{
            cout<<30;
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}