#include <iostream>
using namespace std;
int main() {
    int a,b,c;
    cin>>a>>b>>c;
    if(a>=c&&b>=c){
        if(a>=b){
            cout<<b;
        }
        else{
            cout<<a;
        }
    }
    else if(a>=b&&c>=b){
        if(a>=c){
            cout<<c;
        }
        else{
            cout<<a;
        }
    }
    else if(b>=a&&c>=a){
        if(b>=c){
            cout<<c;
        }
        else{
            cout<<b;
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}