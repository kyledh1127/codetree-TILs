#include <iostream>
using namespace std;
int find(string a){
    for(int i=0;i<a.length();i++){
        for(int j=i+1;j<a.length();j++){
            if(a[i]==a[j]){
                return 0;
                break;
            }
        }
    }
    return 1;
}
int main() {
    string s;
    cin>>s;
    if(find(s)==0){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;
}