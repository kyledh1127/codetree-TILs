#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int num;
    cin>>num;
    int* arr=new int[num];
    int* brr=new int[num];
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
    for(int i=0;i<num;i++){
        cin>>brr[i];
    }
    sort(arr,arr+num);
    sort(brr,brr+num);
    int ans=0;
    for(int i=0;i<num;i++){
        if(arr[i]!=brr[i]){
            ans++;
        }
    }
    if(ans==0){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    
}