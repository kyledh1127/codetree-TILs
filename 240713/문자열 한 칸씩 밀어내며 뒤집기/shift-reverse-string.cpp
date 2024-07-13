#include <iostream>
using namespace std;

int main() {
    string s;
    int n;
    cin >> s >> n;
    for(int i = 0; i < n; i++) {
        int num;
        cin >> num;
        int len = s.length();
        if(num == 1) {
            s = s.substr(1, len - 1) + s[0];
            cout << s << "\n";
        }
        else if(num == 2) {
            s = s[len - 1] + s.substr(0, len - 1);
            cout << s << "\n";
        }
        else if(num == 3) {
            string w="";
            for(int j = len - 1; j >= 0; j--) {
                w+=s[j];
            }
            cout << s<<"\n";
        }
    }
    return 0;
}