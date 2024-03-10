#include <iostream>
using namespace std;
int main() {
    int n,count=0;
    cin >> n;
    for(int i=1; i<=n; i++){
        if(i%2==1){
            for(int j=0;j<n; j++){
                count++;
                cout << count << " ";
            }
        }
        else{
            for(int j=0; j<n; j++){
                count +=2;
                cout << count << " ";
            }
        }
        cout << "\n";
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}