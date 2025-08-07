#include <iostream>

using namespace std;

int a, b;
int sum(int a,int b){
    int sum=0;
    for(int i=a;i<=b;i++){
        int count=0;
        for(int j=2;j<i;j++){
            if(i%j==0){
                count=1;
            }
        }
        if(count==0){
            sum+=i;
        }
    }
    return sum;
}
int main() {
    cin >> a >> b;
    cout<<sum(a,b);
    // Please write your code here.

    return 0;
}