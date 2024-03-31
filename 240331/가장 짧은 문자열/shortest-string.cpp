#include <iostream>
#include <string>
using namespace std;
int main() {
    string a;
    int max=0,min=20;
    for(int i=0;i<3;i++){
        cin>>a;
        if(a.length()<min){
            min=a.length();
        }
        if(a.length()>max){
            max=a.length();
        }
    }
    cout<<max-min;

    // 여기에 코드를 작성해주세요.
    return 0;
}