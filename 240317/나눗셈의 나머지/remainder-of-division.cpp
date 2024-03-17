#include <iostream>
using namespace std;
int main() {
    int arr[4],sum=0;
    int a,b;
    cin>>a>>b;
    for(int i=0;i<4;i++){
        arr[i]=0;
    }
    
    while(a>1){
        if(a%b==0){
            arr[0]++;
        }
        else if(a%b==1){
           arr[1]++;
        }
        else if(a%b==2){
            arr[2]++;
        }
        else if(a%b==3){
            arr[3]++;
        }
        a=a/b;
    }
    sum=(arr[0]*arr[0])+(arr[1]*arr[1])+(arr[2]*arr[2])+(arr[3]*arr[3]);
    cout<<sum;

    // 여기에 코드를 작성해주세요.
    return 0;
}