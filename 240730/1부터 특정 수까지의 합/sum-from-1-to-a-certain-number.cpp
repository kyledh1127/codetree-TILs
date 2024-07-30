#include <iostream>
using namespace std;
void sum(int n){
    int a=0;
    for(int i=1;i<=n;i++){
        a+=i;
    }
    a=a/10;
    cout<<a;
}
int main() {
    int a;
    cin>>a;
    sum(a);
    return 0;
}