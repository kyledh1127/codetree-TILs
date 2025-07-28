#include <iostream>
using namespace std;

int S(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    sum=sum/10;
    return sum;
};
int main() {
    int N;
    cin >> N;
    cout<<S(N);


    return 0;
}