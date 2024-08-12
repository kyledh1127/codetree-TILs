#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int num;
    cin>>num;
    int* arr= new int[num];
    for(int i=0;i<num;i++){
        cin>>arr[i];
        sort(arr,arr+i+1);
        if((i+1)%2==1){
             cout<<arr[i/2]<<" ";
        }
    }
    
   
    return 0;
}