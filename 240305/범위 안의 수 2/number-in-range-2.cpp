#include <iostream>
using namespace std;
int main() {
    int a, sum=0,pre=0;
    for(int i=0;i<10;i++){
        cin>>a;
        if(a>=0&&a<=200){
            sum+=a;
            pre++;
        }
    }
    cout<<fixed;
    cout.precision(1);
    cout<<sum<<" "<<double(sum)/pre;
    // 여기에 코드를 작성해주세요.
    return 0;
}