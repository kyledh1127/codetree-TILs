#include <iostream>
#include<cmath>
using namespace std;
int main() {
    int kg, cm, bim;
    double m;
    cin>>cm>>kg;
    cout<<fixed;
    m=cm*0.01;
    bim=kg/pow(m,2);
    cout<<bim<<endl;
    if(bim>=25){
        cout<<"Obesity";
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}