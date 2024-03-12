#include <iostream>
using namespace std;
int main() {
    int n;
    cin >>n;
    for(int i=0;i<n;i++){
        int a,b,count=0;
        cin>>a>>b;
        for(int j=a;j<=b;j++){
            if(j%2==0){
                count+=j;
            }
        }
        cout<<count<<"\n";
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}