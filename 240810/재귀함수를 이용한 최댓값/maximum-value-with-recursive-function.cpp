#include <iostream>
using namespace std;

int maximum=0;
int sum(int n){
    if(n==0){
        return 1;
    }
    int k;
    cin>>k;
    if(k>maximum){
        maximum=k;
    }
    return sum(n-1);
}
int main() {
    
    int n;
    cin>>n;
    sum(n);
    cout<<maximum;
}