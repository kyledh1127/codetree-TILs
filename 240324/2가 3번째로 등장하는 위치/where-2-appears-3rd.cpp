#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int*arr= new int[n];
    int count=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==2){
            count++;
        }
        if(count==3){
            cout<<i+1;
            break;
        }
    }
    
    // 여기에 코드를 작성해주세요.
    return 0;
}