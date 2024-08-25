#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class per{
public:
    string name;
    int height, weight;
    per(){}
    per(string name,int height,int weight){
        this->name=name;
        this->height=height;
        this->weight=weight;
    }
};
bool fi( per a, per b){
    return a.height<b.height;
}
int main() {
    int num;
    cin>>num;
    vector<per> pers(num);
    string name;
    int height, weight;
    for(int i=0;i<num;i++){
        cin>>pers[i].name>>pers[i].height>>pers[i].weight;
    }
    sort(pers.begin(),pers.end(),fi);
    for(int i=0;i<num;i++){
        cout<<pers[i].name<<" "<<pers[i].height<<" "<<pers[i].weight<<"\n";
    }
    return 0;
}