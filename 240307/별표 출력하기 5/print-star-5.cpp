#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++){ //4번 반복
        for(int j=n;j>i;j--){
            for(int k=n;k>i;k--){
                cout<<"*";
            }
            cout<<" ";
        }
        cout<<endl;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}