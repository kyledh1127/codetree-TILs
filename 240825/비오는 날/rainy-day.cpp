#include <iostream>
#include<vector>    
#include<algorithm>
using namespace std;
class per{
public:  
    string day, week, weather;
    per() {}
    per(string day, string week, string weather){
        this->day=day;
        this->week=week;
        this->weather=weather;
    }
};
bool compareByName(const per& a, const per& b) {
    return a.day < b.day;
    }
int main(){
    int num;
    cin>>num;
    string day, week, weather;
    vector<per> pers(num);
    for(int i=0;i<num;i++){
        cin>>pers[i].day>>pers[i].week>>pers[i].weather;
    }
    sort(pers.begin(),pers.end(),compareByName);
    for(int i=0;i<num;i++){
        if(pers[i].weather=="Rain"){
            cout<<pers[i].day<<" "<<pers[i].week<<" "<<pers[i].weather;
            break;
        }
    }
}