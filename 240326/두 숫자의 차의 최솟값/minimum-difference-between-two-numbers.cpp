#include <iostream>
using namespace std;
int main() {
    int n,min=100;
    cin>>n;
    int* arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]-arr[i]<min){
                min=arr[j]-arr[i];
            }
        }
    }
    cout<<min;
    // 여기에 코드를 작성해주세요.
    return 0;
}