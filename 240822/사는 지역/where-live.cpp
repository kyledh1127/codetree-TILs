#include <iostream>
using namespace std;
class per{
    public:
    string name,phn,city;
    int a;
    per(string name,string phn,string city){
        this->name=name;
        this->phn=phn;
        this->city=city;
        this->a=a;
    }
};
int main() {
    string name,phn,city;
    int a;
    int num;
    cin>>num;
    per per1(name,phn,city);
    per per2(name,phn,city);
    per per3(name,phn,city);
    cin>>per1.name>>per1.phn>>per1.city;
    cin>>per2.name>>per2.phn>>per2.city;
    cin>>per3.name>>per3.phn>>per3.city;
    if(per1.name>per2.name&&per1.name>per2.name){
        cout<<"name "<<per1.name<<"\n";
        cout<<"addr "<<per1.phn<<"\n";
        cout<<"city "<<per1.city<<"\n";
    }
    else if(per2.name>per1.name&&per2.name>per3.name){
        cout<<"name "<<per2.name<<"\n";
        cout<<"addr "<<per2.phn<<"\n";
        cout<<"city "<<per2.city<<"\n";
    }
    else if(per3.name>per1.name&&per3.name>per2.name){
        cout<<"name "<<per3.name<<"\n";
        cout<<"addr "<<per3.phn<<"\n";
        cout<<"city "<<per3.city<<"\n";
    }
    return 0;
}