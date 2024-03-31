#include <iostream>
#include <string>
using namespace std;
int main() {
    string a;
    for(int i=0;i<2;i++){
        getline(cin,a);
        for (int j = 0; j < a.length(); j++) {
        if (a[j] != ' ') {
            cout << a[j];
        }
    }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}