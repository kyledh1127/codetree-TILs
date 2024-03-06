#include <iostream>
using namespace std;
int main() {
    int a,b;
    cin >> a >> b;
    bool satisfied=false;
    for(int i=2;i<=a;i++){
        if(b%i == 0 && a%i == 0){
            satisfied = true;
        }
    }
    if(satisfied==true){
        cout << 1;
    }
    else{
        cout << 0;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}