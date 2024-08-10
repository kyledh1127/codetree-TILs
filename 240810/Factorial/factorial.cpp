#include <iostream>
using namespace std;
int sum(int m){
    if(m==0){
        return 1;
    }
    else{
        return m*sum(m-1);
    }
}
int main() {
    int num;
    cin>>num;
    cout<<sum(num);
}