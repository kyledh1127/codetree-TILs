#include <iostream>
using namespace std;
int sum(int n){
    if(n==1){
        return 2;
    }
    else if(n==2){
        return 4;
    }
    else{
        return (sum(n-1)*sum(n-2))%100;
    }
}
int main() {
    int n;
    cin>>n;
    cout<<sum(n);
    return 0;
}