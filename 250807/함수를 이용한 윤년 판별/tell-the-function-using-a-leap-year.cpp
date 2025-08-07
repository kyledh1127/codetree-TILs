#include <iostream>

using namespace std;

int y;
bool year(int y){
    if(y%4==0&&y%100!=100){
        return true;
    }
    if(y%100==0&&y%400!=0){
        return false;
    }
    return false;
}
int main() {
    cin >> y;
    if(year(y)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    // Please write your code here.

    return 0;
}