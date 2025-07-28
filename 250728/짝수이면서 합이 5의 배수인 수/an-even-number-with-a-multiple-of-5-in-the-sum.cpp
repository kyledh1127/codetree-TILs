#include <iostream>

using namespace std;

int n;
bool mul(int n){
    if(n%2==0&&(n%10+n/10)%5==0){
        return true;
    }
    else{
        return false;
    }
}
int main() {
    cin >> n;

    if(mul){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }

    return 0;
}