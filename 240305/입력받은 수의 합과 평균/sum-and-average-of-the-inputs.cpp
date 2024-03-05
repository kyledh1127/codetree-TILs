#include <iostream>
using namespace std;
int main() {
    int n,sum=0;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        sum+=a;
    }
    cout<<fixed;
    cout.precision(1);
    cout<<sum<<" "<<double(sum)/n;
    // 여기에 코드를 작성해주세요.
    return 0;
}