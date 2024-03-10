#include <iostream>
using namespace std;
int main() {
    int n, count=2;
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(count>8){
                count=2;
            }
            cout << count << " ";
            count+=2;
        }
        cout << "\n";
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}