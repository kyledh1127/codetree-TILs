#include <iostream>
using namespace std;
int main() {
    int ct1=0, ct2=0, ct3=0, ct4=0;
    char arr[3];
    int brr[3];
    for(int i=0; i<3;i++){
        cin>>arr[i]>>brr[i];
    }
    // char y='Y',n='N';
    for(int i=0; i<3;i++){
        if(arr[i] == 'Y'&&brr[i]>=37){
            // cout<<"A"<<" ";
            // count++;
            ct1++;
        }
        else if(arr[i] == 'N'&&brr[i]>=37){
            // cout<<"B"<<" ";
            ct2++;
        }
        else if(arr[i] == 'Y'&&brr[i]<=37){
            // cout<<"C"<<" ";
            ct3++;
        }
        else if(arr[i] == 'N'&&brr[i]<=37){
            // cout<<"D"<<" ";
            ct4++;
        }
    }
    cout<<ct1<<" "<<ct2<< " "<<ct3<<" "<<ct4<<" ";
    if(ct1>=2){
        cout<<"E";
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}