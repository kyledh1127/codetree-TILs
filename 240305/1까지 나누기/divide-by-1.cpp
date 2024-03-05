#include <iostream>
using namespace std;
int main() {
    int n,k,count=0;
    cin>>n;
    k=n;
    for(int i=1;i<=n;i++){
        count ++;
        
        k/=i;
        if(k<=1){
            break;
        }

    }
    cout<<count;
    // 여기에 코드를 작성해주세요.
    return 0;
}