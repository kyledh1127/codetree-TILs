#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int num;
    cin>>num;
    int* arr= new int[num];
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
    sort(arr,arr+num);
    for(int i=1;i<=num;i++){
        if(i%2==1){
           
            cout<<arr[i/2]<<" ";
        }
    }
    return 0;
}