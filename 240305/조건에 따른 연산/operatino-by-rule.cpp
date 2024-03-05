#include <iostream>
using namespace std;
int main() {
    int n,count=0;
    cin>>n;
    while(true){
        count++;
        if(n%2==0){
            n=n*3+1;
            if(n>=1000){
                break;
            }
        }
        else if(n%2==1){
            n=n*2+2;
            if(n>=1000){
                break;
            }
        }
        
    }
    cout<<count;

    // 여기에 코드를 작성해주세요.
    return 0;
}