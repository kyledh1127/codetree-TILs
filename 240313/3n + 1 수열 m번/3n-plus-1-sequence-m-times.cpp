#include <iostream>
using namespace std;
int main() {
    int k;
    cin >> k;
    for(int i=0;i<k;i++){
        int n, count=0;;
        cin>>n;
        while(n!=1){
            if(n%2==0){
                n/=2;
                count++;
            }
            else if(n%2==1){
                n=n*3+1;
                count++;
            }
            
        }
        cout<<count;
    }   
    // 여기에 코드를 작성해주세요.
    return 0;
}