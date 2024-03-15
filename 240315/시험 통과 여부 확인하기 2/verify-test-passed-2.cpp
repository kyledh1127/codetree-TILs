#include <iostream>
using namespace std;
int main() {
    int arr[10];
    int n,count=0;
    cin >> n;
    for(int i=0 ; i<n; i++){
        int a,b,c,d;
        cin >> a >> b >> c >>d;
        arr[i]=(a+b+c+d)/4;
        if(arr[i]>=60){
            cout<<"pass"<<endl;
            count++;
        }
        else{
            cout<<"fail"<<endl;
        }
        
    }
    cout<<count;
    
    
    // 여기에 코드를 작성해주세요.
    return 0;
}