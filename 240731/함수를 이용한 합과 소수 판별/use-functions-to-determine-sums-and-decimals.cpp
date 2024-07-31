#include <iostream>
using namespace std;
bool find(int a){
    for(int i=2;i<a;i++){
        if(a%i==0){
            return false;
        }
        else{
            return true;
        }
    }
}
void ans(int a,int b){
    int c=a;
    int count=0;
    while(c<=b){
        if(find(c)==true){
            int k= c/10;
            int j=c%10;
            if((k+j)%2==0){
                count++;
            }
        }
        c++;
    }
    cout<<count-1;
}
int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    cin>>a>>b;
    ans(a,b);
    return 0;
}