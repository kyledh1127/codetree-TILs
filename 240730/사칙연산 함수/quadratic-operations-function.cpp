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
   
    if(c=="+"){
        cout<<a<<" "<<c<<" "<<b<<" = ";
        sum(a,b);
    }
    else if(c=="-"){
         cout<<a<<" "<<c<<" "<<b<<" = ";
        del(a,b);
    }
    else if(c=="*"){
         cout<<a<<" "<<c<<" "<<b<<" = ";
        rad(a,b);
    }
    else if(c=="/"){
         cout<<a<<" "<<c<<" "<<b<<" = ";
        dick(a,b);
    }
    else{
        cout<<"False";
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}