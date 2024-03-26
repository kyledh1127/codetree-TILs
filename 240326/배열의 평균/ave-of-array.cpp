#include <iostream>
using namespace std;
int main() {
    double arr[2][4],wh=0;
    cout<<fixed;
    cout.precision(1);
    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<2;i++){
        double sum=0;
        for(int j=0;j<4;j++){
            sum += arr[i][j];
        }
        cout<<sum/4<<" ";
    }
    cout<<"\n";
    for(int i=0;i<4;i++){
        double sum=0;
        for(int j=0;j<2;j++){
            sum += arr[j][i];
        }
        cout<<sum/2<<" ";
    }
    cout<<"\n";
     for(int i=0;i<4;i++){
        for(int j=0;j<2;j++){
            wh += arr[j][i];
        }
    }
    cout<<wh/8<<" ";
    // 여기에 코드를 작성해주세요.
    return 0;
}