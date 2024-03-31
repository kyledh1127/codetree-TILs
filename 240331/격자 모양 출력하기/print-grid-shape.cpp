#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int arr[10][10] = {0}; // 격자를 0으로 초기화

    for(int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y; // 각 점의 위치를 입력받음
        arr[x - 1][y - 1] = x * y; // 점의 크기를 계산하여 저장
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << arr[i][j] << " "; // 수정된 격자 출력
        }
        cout << "\n";
    }
    return 0;
}