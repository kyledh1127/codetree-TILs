#include <iostream>
using namespace std;
void ans(int a,int b){
    int count=0;
    int c=a;
    while(c<=b){
        
        if(c%2==0){
            count++;
        }
        else{
            if(c%10==5){
                count++;
            }
            else{
                if(c%3==0&c%9!=0){
                    count++;
                }
            }
        }
        c++;
    }
    cout<<b-a+1-count;
}
int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    cin>>a>>b;
    ans(a,b);
    return 0;
}