#include <iostream>
using namespace std;
void find(string a){
    int count=0;
    
    for(int i=0;i<a.length();i++){
        int k=a[i];
        if(k==a[i+1]){
            k=a[i+1];
        }
        else{
            count++;
        }

    }
    if(count==0){
        cout<<"N0";
    }
    else{
        cout<<"Yes";
    }
}
int main() {
    string s;
    cin>>s;
    find(s);
    return 0;
}