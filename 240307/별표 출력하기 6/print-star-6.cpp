#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout << "  ";
        }
        for(int j=2*n;j>2*i+1;j--){
            cout << "* ";
        }
        cout<<endl;
    }
    for(int i=1;i<n;i++){
        for(int j=1;j<n-i;j++){
            cout << "  ";
        }
        for(int j=0;j<2*i+1;j++){
            cout<<"* ";
        }
        cout<<endl;        
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}