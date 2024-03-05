#include <iostream>
using namespace std;
int main() {
    int n,sum=0,num=0;
    while(true){
        cin>>n;
        
        if(n>=30||n<20){
            break;
        }
        num++;
        sum+=n;
    }
    cout<<fixed;
    cout.precision(2);
    cout<<double(sum)/num;
    // 여기에 코드를 작성해주세요.
    return 0;
}