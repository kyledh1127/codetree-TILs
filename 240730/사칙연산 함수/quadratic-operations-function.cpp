#include <iostream>
using namespace std;
void sum(int a,int b){
    cout<<a+b;
}
void del(int a,int b){
    cout<<a-b;
}
void rad(int a, int b){
    cout<<a*b;
}
void dick(int a, int b){
    cout<<a/b;
}
int main() {
    int a,b;
    string c;
    cin>>a>>c>>b;
    cout<<a<<" "<<c<<" "<<b<<" = ";
    if(c=="+"){
        sum(a,b);
    }
    else if(c=="-"){
        del(a,b);
    }
    else if(c=="*"){
        rad(a,b);
    }
    else if(c=="/"){
        dick(a,b);
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}