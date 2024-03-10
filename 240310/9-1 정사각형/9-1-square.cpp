#include <iostream>
using namespace std;
int main() {
    int n, count=9;
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(count<1){
                count=9;
            }
            cout << count;
            count--;
        }
        cout << "\n";
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}