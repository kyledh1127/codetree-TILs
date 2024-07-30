#include <iostream>
using namespace std;


int gcd(int a, int b) {
	int r;
	while (b != 0) {
		r = a % b;
		a = b;
		b = r;
	}
	return a;
}



int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
	cin >> a >> b;
    cout<<(a*b)/gcd(a, b);
    return 0;
}