#include <iostream>
using namespace std;
int main() {
    int a,b,sum=0;
    cin>>a>>b;
    for(;a<=b;a++){
        if(a%6==0&&a%8!=0){
            sum+=a;
        }
    }
    cout<<sum;
    // 여기에 코드를 작성해주세요.
    return 0;
}