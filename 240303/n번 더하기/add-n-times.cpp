#include <iostream>
using namespace std;
int main() {
    int a,n,k;
    cin>>a>>n;
    k=a+n;
    for(int i=0;i<n;i++){
        cout<<k<<endl;
        k+=n;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}