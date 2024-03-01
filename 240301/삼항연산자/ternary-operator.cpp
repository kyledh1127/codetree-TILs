#include <iostream>
using namespace std;
int main() {
    int score,pf;
    cin>>score;
    
    pf= score==100 ? 0:1;
    if(pf==0){
        cout<<"pass";
    }
    else{
        cout<<"failure";
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}