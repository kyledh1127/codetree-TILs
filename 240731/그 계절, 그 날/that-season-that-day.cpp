#include <iostream>
using namespace std;
bool year(int a){
    if(a%4==0&&a%100!=0){
        return true;  
    }
    else if(a%4==0&&a%100==0&&a%400==0){
        return true;
    }
    else{
        return false;
    }
}
int find(int a,int b){
    if(a>12){
       return 1;
    }
    else if(a==2){
        if(b>28){
           return 1;
        }
        else{
           return 0;
        }
    }
    else if(a==1||a==3||a==5||a==7||a==8||a==10||a==12){
        if(b>31){
           return 1;
        }
        else{
           return 0;
        }
    }
    else{
       if(b>30){
           return 1;
        }
        else{
           return 0;
        } 
    }
}
int fin(int a,int b){
    if(a>12){
       return 1;
    }
    else if(a==2){
        if(b>29){
           return 1;
        }
        else{
           return 0;
        }
    }
    else if(a==1||a==3||a==5||a==7||a==8||a==10||a==12){
        if(b>31){
           return 1;
        }
        else{
           return 0;
        }
    }
    else{
       if(b>30){
           return 1;
        }
        else{
           return 0;
        } 
    }
}
int main() {
    int a,b,c;
    cin>>c>>a>>b;
    if(year(c)){
        if(fin(a,b)==1){
            if(a>=3&&a<=5){
                cout<<"Spring";
            }
            else if(a>=6&&a<=8){
                cout<<"Summer";
            }
            else if(a>=9&&a<=11){
                cout<<"Fall";
            }
            else{
                cout<<"Winter";
            }
        }
        else{
            cout<<-1;
        }
    }
    else{
        if(find(a,b)==1){
            if(a>=3&&a<=5){
                cout<<"Spring";
            }
            else if(a>=6&&a<=8){
                cout<<"Summer";
            }
            else if(a>=9&&a<=11){
                cout<<"Fall";
            }
            else{
                cout<<"Winter";
            }
        }
        else{
            cout<<-1;
        }
    }
    find(a,b);
    return 0;
}