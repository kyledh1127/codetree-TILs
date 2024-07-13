#include <iostream>
#include<string>
using namespace std;

int main() {
    string a,b;
    cin>>a>>b;
    int count=0,k=100;
    
    while(k>0){
        int bol=0;
        for(int i=0;i<a.length();i++){
            if(a[i]==b[0]){
                for(int j=0;j<b.length();j++){
                    if(a[i+j]==b[j]){
                      count++;
                    }
                }
                if(b.length()==count){
                    a.erase(i,b.length());
                    bol=1;
                }
                count=0;
            }
        }
        if(bol==0){
            break;
        }
    }
    cout<<a;
    return 0;
}