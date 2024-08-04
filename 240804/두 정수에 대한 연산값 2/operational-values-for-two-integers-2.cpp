#include <iostream>
using namespace std;
void math(int a,int b){
    if(a>b){
        cout<<a*2<<" "<<b+10;
    }
    else{
        cout<<a+10<<" "<<b*2;
    }
}
int main() {
    int a,b;
    cin>>a>>b;
    math(a,b);
    return 0;
}