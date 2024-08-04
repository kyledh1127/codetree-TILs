#include <iostream>
using namespace std;
void find(string a){
    int count=0;
    int k=a[0];
    for(int i=0;i<a.length()-1;i++){
        if(k==a[i+1]){
            k=a[i+1];
        }
        else{
            count++;
            break;
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