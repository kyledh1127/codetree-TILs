#include <iostream>
using namespace std;
int main() {
    string s;
    cin>>s;
    char len='a';
    s[1]=len;
    s[s.length()-2]=len;
    cout<<s;
    return 0;
}