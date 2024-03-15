#include <iostream>
using namespace std;
int main() {
    int arr[100];
    int n;
    cin>>n;
    for(int i=1 ; i<=n; i++){
        cin>>arr[i];
    }
    for(int i=n; i>0;i--){
        if((arr[i]%2==0)){
            cout<<arr[i]<<" ";
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}