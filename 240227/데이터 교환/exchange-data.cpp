#include <iostream>
using namespace std;
int main() {
    int a=5,b=6,c=7;
    int temp;
    temp=b;
    b=a;
    a=c;
    c=temp;
    //a=5,b=5,c=6
cout<<a<<endl<<b<<endl<<c;
    // 여기에 코드를 작성해주세요.
    return 0;
}