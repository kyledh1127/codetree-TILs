#include <iostream>
using namespace std;

int main() {
    int num=0;
    string arr[200];
    while(1){
        string s;
        cin>> s;
        if(s=="0"){
            break;
        }
        num++;
        arr[num]=s;
    }
    cout<<num<<"\n";
    for(int i=1;i<=num;i++){
        if(i%2==1){
            cout<<arr[i]<<"\n";
        }
        
    }
    return 0;
}