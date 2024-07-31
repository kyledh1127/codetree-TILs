#include <iostream>
using namespace std;

void find(int a, int b) {
    int* arr = new int[a];
    int* brr = new int[b];
    
    for (int i = 0; i < a; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < b; i++) {
        cin >> brr[i];
    }
    
    bool found = false;
    for (int i = 0; i <= a - b; i++) {  // 첫 배열의 범위 내에서만 검사
        bool match = true;
        for (int j = 0; j < b; j++) {
            if (arr[i + j] != brr[j]) {
                match = false;
                break;
            }
        }
        if (match) {
            found = true;
            break;
        }
    }
    
    if (found) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    
    delete[] arr; // 동적 할당한 메모리 해제
    delete[] brr;
}

int main() {
    int a, b;
    cin >> a >> b;
    find(a, b);
    return 0;
}