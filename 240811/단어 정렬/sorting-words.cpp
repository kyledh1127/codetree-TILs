#include <iostream>
#include <algorithm>
#include<string>
using namespace std;

int main() {
    int num;
    cin>>num;
    string* arr=new string[num];
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
    sort(arr,arr+num);
    for(int i=0;i<num;i++){
        cout<<arr[i]<<"\n";
    }
}