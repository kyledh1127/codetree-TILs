#include <iostream>
using namespace std;
int main() {
    char a,b,c;
    int d,e,f;
    cin>>a>>d;
    cin>>b>>e;
    cin>>c>>f;
    if(a=='Y'&&d>=37){
        if(b=='Y'&&e>=37){
            cout<<"E";
        }
        else if(c=='Y'&&f>=37){
            cout<<"E";
        }
        else{
            cout<<"N";
        }
    }
    else if(b=='Y'&&e>=37){
        if(c=='Y'&&f>=37){
            cout<<"E";
        }
        else{
            cout<<"N";
        }
    }
    else{
        cout<<"N";
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}