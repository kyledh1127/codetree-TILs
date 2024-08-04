#include <iostream>
using namespace std;
void find(string a){
    int count=0;
    
    for(int i=0;i<a.length();i++){
        if(a[i]==a[i+1]){
            a[i]=a[i+1];
        }
        else{
            count++;
        }

    }
    if(count==0){
        cout<<"No";
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