#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    string arr, brr;
    cin >> arr >> brr;

    // 문자열의 길이가 다르면 즉시 "No" 출력
    if (arr.length() != brr.length()) {
        cout << "No";
        return 0;
    }

    // 문자열을 정렬하여 비교
    sort(arr.begin(), arr.end());
    sort(brr.begin(), brr.end());

    if (arr == brr) {
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}