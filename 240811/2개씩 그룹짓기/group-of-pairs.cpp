#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int num;
    cin>>num;
    int* arr=new int[num*2];
    for(int i=0;i<2*num;i++){
        cin>>arr[i];
    }
    sort(arr,arr+2*num);
    int *brr=new int[num];
    for(int i=0;i<num;i++){
        brr[i]=arr[i]+arr[num+i-1];
    }
    int min=brr[0];
    for(int i=1;i<num;i++){
        if(brr[i]>min){
            min=brr[i];
        }
    }
    cout<<min;
}