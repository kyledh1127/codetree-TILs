#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class per{
    public:
    string name,phn,city;
    per() {}
    per(string name,string phn,string city){
        this->name=name;
        this->phn=phn;
        this->city=city;
    }
};
bool compareByName(const per& a, const per& b) {
    return a.name < b.name;
    }
int main() {
    string name,phn,city;
    int num;
    cin>>num;
    vector<per> pers(num);
    for(int i=0;i<num;i++){
        cin>>pers[i].name>>pers[i].phn>>pers[i].city;
    }
    
    sort(pers.begin(), pers.end(), compareByName);
    cout<<"name "<<pers[num-1].name<<"\n";
    cout<<"addr "<<pers[num-1].phn<<"\n";
    cout<<"city "<<pers[num-1].city<<"\n";
    return 0;
}