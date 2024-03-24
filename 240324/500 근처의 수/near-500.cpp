#include <iostream>
using namespace std;
int main() {
    int arr[10];
    int max=0,min=1000;
    for(int i=0;i<10;i++){
        cin>>arr[i];
        if(arr[i]>500 && arr[i]<min){
            min=arr[i];
        }
        else if(arr[i]<500&&arr[i]>max){
            max=arr[i];
        }
    }
    cout<<max<<" "<<min;

    // 여기에 코드를 작성해주세요.
    return 0;
}