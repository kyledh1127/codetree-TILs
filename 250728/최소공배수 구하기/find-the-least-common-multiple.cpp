#include <iostream>

using namespace std;

int n, m;

int main() {
    cin >> n >> m;

    for(int i=1;i<100;i++){
        n=n*i;
        if(n%m==0){
            cout<<n;
            break;
        }
        else{
            n=n/i;
        }

    }

    return 0;
}