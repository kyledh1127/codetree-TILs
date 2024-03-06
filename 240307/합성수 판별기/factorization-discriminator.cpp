#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    bool satisfied= false;
    for(int i=2;i<n;i++){
        if(n%i==0){
            satisfied = true;
        }
    }
    if(satisfied==true){
        cout<<"C";
    }
    else{
        cout << "N";
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}