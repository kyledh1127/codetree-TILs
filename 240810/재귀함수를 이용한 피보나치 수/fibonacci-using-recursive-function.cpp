#include <iostream>
using namespace std;
int count=0;
int sum(int n){
    int k;
    if(n==0){
        return 0;
    }
    if(n==1||n==2){
        return 1;
    }
    else{
        return sum(n-1)+sum(n-2);
    }
    
}
int main() {
    int n;
    cin>>n;
    cout<<sum(n);
    return 0;
}