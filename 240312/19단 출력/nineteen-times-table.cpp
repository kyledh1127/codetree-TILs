#include <iostream>
using namespace std;
int main() {
    int n=19;
    for(int i=1; i<=n;i++){
        for(int j=1;j<=19;j+=2){
            if(j>=19){
                cout<< i << " * " << j << " = " << i*j  <<  "\n";
                break;
            }
            cout<< i << " * " << j << " = " << i*j <<" / " << i << " * " << j+1 << " = " << i*(j+1) <<"\n";
        }
    }

    // 여기에 코드를 작성해주세요.
    return 0;
}