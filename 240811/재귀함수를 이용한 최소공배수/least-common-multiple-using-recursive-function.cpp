#include <iostream>
using namespace std;

int maximum = 1; // 최소공배수를 저장하는 변수
int minimum = 1; // 최대공약수를 저장하는 변수

int gcd(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int lc(int a, int b) {
    return (a * b) / gcd(a, b);
}

void sum(int n) {
    if (n == 0) {
        return;
    }
    
    int a;
    cin >> a;

    // 첫 번째 숫자의 경우 직접 할당
    if (maximum == 1) {
        maximum = a;
    } else {
        maximum = lc(maximum, a); // 최소공배수 갱신
    }

    sum(n - 1);
}

int main() {
    int n;
    cin >> n;
    sum(n);
    cout << maximum;
}