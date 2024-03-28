#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter the size of the grid (n x n): ";
    cin >> n;

    int grid[100][100]; // 최대 크기 100 x 100으로 가정

    int num = 1;

    for (int j = n - 1; j >= 0; --j) { // 열 반복
        if ((n - 1 - j) % 2 == 0) { // 짝수번째 열인 경우 (0부터 시작)
            for (int i = n - 1; i >= 0; --i) {
                grid[i][j] = num++;
            }
        } else { // 홀수번째 열인 경우
            for (int i = 0; i < n; ++i) {
                grid[i][j] = num++;
            }
        }
    }

    // 결과 출력
    cout << "Filled grid:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << grid[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}