#include <iostream>
using namespace std;

void min(int a,int b, int c){
    int min=100;
    if(a<=min){
        min=a;
    }
    if(b<=min){
        min=b;
    }
    if(c<=min){
        min=c;
    }
    cout<<min;
}
int main() {
    int a,b,c;
    cin>>a>>b>>c;
    min(a,b,c);
    // 여기에 코드를 작성해주세요.
    return 0;
}