#include <iostream>
#include <algorithm>
#include <string>
#include<vector>
using namespace std;

int main(){
    int num;
    cin>>num;
    string arr;
    string brr;
    for(int i=0;i<arr.length();i++){
        cin>>arr[i];
    }
    for(int i=0;i<brr.length();i++){
        cin>>brr[i];
    }
    sort(arr.begin(), arr.end());
    sort(brr.begin(), brr.end());
    int ans=0;
    if(arr.length()>brr.length()){
        for(int i=0;i<brr.length();i++){
        if(arr[i]!=brr[i]){
            ans++;
        }
        }
    }
    else{
        for(int i=0;i<arr.length();i++){
            if(arr[i]!=brr[i]){
                ans++;
            }
        }
    }
    
    if(ans==0){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    if(arr.length()!=brr.length()){
        cout<<"No";
    }
    
}