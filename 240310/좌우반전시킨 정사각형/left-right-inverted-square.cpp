#include <iostream>
using namespace std;
int main() {
    int a;
    cin >> a;
    for(int i=1; i<=a; i++){
        for(int j=a; j>0; j--){
            cout << i*j << " ";
        }
        cout << "\n";
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}