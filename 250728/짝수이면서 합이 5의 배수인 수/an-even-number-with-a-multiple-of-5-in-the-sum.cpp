#include <iostream>

using namespace std;

int n;
bool mul(int n){
    int a=n/10;
    int b=n%10;
    int c=a+b;
    if(n%2==0&&c%5==0){
        return true;
    }
    else{
        return false;
    }
}
int main() {
    cin >> n;

    if(mul(n)){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }

    return 0;
}