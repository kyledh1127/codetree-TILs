#include <iostream>
using namespace std;
void as(int a,int b){
    int c=a;
    for(int i=1;i<b;i++){
        a=a*c;
    }
    cout<<a;
}
int main() {
    int a,b;
    cin>>a>>b;
    as(a,b);
    // 여기에 코드를 작성해주세요.
    return 0;
}