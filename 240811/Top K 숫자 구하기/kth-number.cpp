#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int num,a;
    cin>>num>>a;
    int* arr=new int[num];
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
    sort(arr,arr+num);
    cout<<arr[a-1];
    
}