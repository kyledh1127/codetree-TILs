#include <iostream>
using namespace std;
int sum(int n){
    if(n==1){
        return 1;
    }
    else if(n==2){
        return 2;
    }
    else{
        return sum(n/3)+sum(n-1);
    }
}
int main() {
    int n;
    cin>>n;
    cout<<sum(n);
    return 0;
}