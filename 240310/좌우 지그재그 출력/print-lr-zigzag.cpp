#include <iostream>
using namespace std;
int main() {
    int n,count=1;
    cin >> n;
    for(int i=1; i<=n; i++){
        if(i%2==1){
            count=n*(i-1)+1;
            for(int j=0; j<n; j++){
                cout << count << " ";
                count++;
            }
        }
        else{
            count=n*i;
            for(int j=0; j<n; j++){
                cout << count << " ";
                count--;
            }
        }
       cout << "\n";
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}