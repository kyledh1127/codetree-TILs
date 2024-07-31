#include <iostream>
using namespace std;
void find(int a,int b){
    int* arr= new int[a];
    int* brr=new int[b];
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    for(int i=0;i<b;i++){
        cin>>brr[i];
    }
    int count=0;
    bool k=false;
    for(int i=0;i<a;i++){
        if(arr[i]==brr[0]){
            k=true;
            for(int j=0;j<b;j++){
                if(arr[i+j]==brr[j]){
                    count++;
                }
            }
            if(count==b){
                cout<<"Yes";
                break;
            }
            count=0;
        }
    }
    if(k==false){
        cout<<"No";
    }
}
int main() {
    int a,b;
    cin>>a>>b;
    find(a,b);
    return 0;
}