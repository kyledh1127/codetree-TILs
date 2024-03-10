#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for(int i=1; i<=2*n+1; i++){
        for(int j=1; j<=2*n+1; j++){
            if(i%2==1 || j%2==1){
                cout<< "* ";
            }
            else{
                cout << "  ";
            }
        }
        cout<<"\n";
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}