#include <iostream>
using namespace std;

int main() {
    int a,b;
    int n1,n2;
    cin>>a>>b;
    int* arr=new int[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    for(int i=0;i<b;i++){
        int sum=0;
        cin>>n1>>n2;
        for(int j=n1-1;j<n2;j++){
            sum+=arr[j];
        }
        cout<<sum<<"\n";
    }

    return 0;
}