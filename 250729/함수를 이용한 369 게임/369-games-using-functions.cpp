#include <iostream>

using namespace std;

int a, b;
int k;
bool have(int j){
    if(j%10==3||j%10==6||j%10==9){
        return true;
    }
    else{
        return false;
    }
}
int count(int A,int B){
    int count=0;
    int sum;
    
    for(int i=A;i<=B;i++){
        sum=0;
        k=0;
        for(int j=i;j>0;j/=10){
            sum=sum+j%10;
            
            if(have(j)==true){
                k=1;
            }
        }
        if(sum%3==0||k==1){
        count++;
    }
    }
        
    

    return count;
}
int main() {
    cin >> a >> b;
    cout<<count(a,b);
    
    // Please write your code here.

    return 0;
}