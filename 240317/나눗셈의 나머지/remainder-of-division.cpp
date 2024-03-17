#include <iostream>
using namespace std;
int main() {
    int a,b;
    cin>>a>>b;
    int arr[b],sum=0;
    for(int i=0;i<b;i++){
        arr[i]=0;
    }
    
    while(a>1){
        int laft;
        laft= a%b;
        arr[laft]++;
        a=a/b;
    }
    for(int i=0; i<b;i++){
        sum+= arr[i]*arr[i];
    }
    
    cout<<sum;

    // 여기에 코드를 작성해주세요.
    return 0;
}