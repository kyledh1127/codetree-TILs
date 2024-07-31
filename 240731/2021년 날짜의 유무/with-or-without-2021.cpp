#include <iostream>
using namespace std;
void find(int a,int b){
    if(a>12){
        cout<<"No";
    }
    else if(a==2){
        if(b>28){
            cout<<"No";
        }
        else{
            cout<<"Yes";
        }
    }
    else if(a==1||a==3||a==5||a==7||a==8||a==10||a==12){
        if(b>31){
            cout<<"No";
        }
        else{
            cout<<"Yes";
        }
    }
    else{
       if(b>30){
            cout<<"No";
        }
        else{
            cout<<"Yes";
        } 
    }
}
int main() {
    int a,b;
    cin>>a>>b;
    find(a,b);
    return 0;
}