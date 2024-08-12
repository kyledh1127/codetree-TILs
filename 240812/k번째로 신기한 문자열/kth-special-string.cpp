#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a,b;
    string s;
    cin>>a>>b>>s;
    string* arr= new string[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    int count=0;
   
    sort(arr,arr+a);
    for(int j=0;j<a;j++){
         int check=0;
        for(int i=0;i<s.length();i++){
            if(arr[j][i]!=s[i]){
                check++;
                break;
            }
        }
        if(check==0){
            count++;

        }
        if(count==b){
            cout<<arr[j];
            break;
        }
    }
    
    return 0;
}