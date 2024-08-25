#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class per{
public:
    string name;
    int kor,math,eng;
    per(){}
    per(string name, int kor, int eng, int math){
        this->name=name;
        this->kor=kor;
        this->math=math;
        this->eng=eng;
    }

};
bool fi(per a,per b){
    if(a.kor==b.kor){
        if(a.eng==b.eng){
            return a.math<b.math;
        }
        else{
            return a.eng<b.eng;
        }
    }
    else{
        return a.kor<b.kor;
    }
}
int main() {
    int num;
    cin>>num;
    vector<per> pers(num);
    for(int i=0;i<num;i++){
        cin>>pers[i].name>>pers[i].kor>>pers[i].eng>>pers[i].math;
    }
    sort(pers.begin(),pers.end(),fi);
    for(int i=num-1;i>=0;i--){
        cout<<pers[i].name<<" "<<pers[i].kor<<" "<<pers[i].eng<<" "<<pers[i].math<<"\n";
    }
}