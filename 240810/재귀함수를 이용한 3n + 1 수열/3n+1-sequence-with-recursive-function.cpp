#include <iostream>
using namespace std;
int count=0;
int sum(int n){
    if(n==1){
        return count;
    }
    else if(n%2==0){
        n=n/2;
        count++;
        return sum(n);
    }
    else if(n%2==1){
        n=n*3;
        n=n+1;
        count++;
        return sum(n);
    }
}
int main() {
    int n;
    cin>>n;
    cout<<sum(n);
    return 0;
}