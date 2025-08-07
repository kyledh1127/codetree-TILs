#include <iostream>

using namespace std;

int y,m,d;
bool year(int y){
    if(y%4==0&&y%100!=0){
        return true;
    }
    if(y%100==0&&y%400==0){
        return true;
    }
    return false;
}
int main() {
    cin >> y >> m >> d;
    int M,D;
    if(year(y)){
        if(m==2){
            D=29;
        }
        else if( m==1||m==3||m==5||m==7||m==8||m==10||m==12){
            D=31;
        }
        else{
            D=30;
        }
    }
    else{
        if(m==2){
            D=28;
        }
        else if( m==1||m==3||m==5||m==7||m==8||m==10||m==12){
            D=31;
        }
        else{
            D=30;
        }
    }
    if(d<=D){
        if(m>=3&&m<=5){
            cout<<"Spring";
        }
        else if(m>=6&&m<=8){
            cout<<"Summer";
        }
        else if(m>=9&&m<=11){
            cout<<"Fall";
        }
        else{
            cout<<"Winter";
        }
    }
    else{
        cout<<-1;
    }
    return 0;
}