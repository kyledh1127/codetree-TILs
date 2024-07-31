#include <iostream>
using namespace std;
int find(int a){
    int count=0;
    for(int i=2;i<a;i++){
        if(a%i==0){
            count++;
        }
    }
    return count;
}
void ans(int a,int b){
    int c=a;
    int count=0;
    while(c<=b){
        if(find(c)==0){
            int k= c/10;
            int j=c%10;
            if((k+j)%2==0){
                count++;
            }
        }
        c++;
    }
    cout<<count;
}
int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    cin>>a>>b;
    ans(a,b);
    return 0;
}