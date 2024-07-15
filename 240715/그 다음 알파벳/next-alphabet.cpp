#include <iostream>
using namespace std;

int main() {
    char a;
    int b;
    cin>>a;
    b=(int)a+1;
    if((int)a==122){
        b=97;
    }
    cout<<(char)b;
    return 0;
}