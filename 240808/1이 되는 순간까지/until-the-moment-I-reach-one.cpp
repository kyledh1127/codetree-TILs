#include <iostream>
    int count=0;
using namespace std;
int sum(int n){
    if(n==1){
        return count;
    }
    if(n%2==0){
        count++;
        return sum(n/2);
    }
    else if(n%2==1){
        count++;
        return sum(n/3);
    }
    

}
int main() {
    int n;
    cin>>n;

    cout<<sum(n);
    return 0;
}