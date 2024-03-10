#include <iostream>
using namespace std;
int main() {
    int n,count=1;
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=1; j<=i; j++){
            cout<<"  ";
        }
        for(int j=n; j>i; j--){
            if(count>9){
                count=1;
            }
            cout<<count<<" ";
            count++;
        }
        cout<< "\n";
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}