#include <iostream>
using namespace std;
int sum(int n){
    if(n<10){
        return n;
    }
    int k=n%10;
    return k+sum(n/10);
}
int main() {
    int a,b,c;
    cin>>a>>b>>c;
    int n=a*b*c;
    cout<<sum(n);
    return 0;
}