#include <iostream>
using namespace std;
class per{
    public:
    string name,phn,city;
    int a;
    per(string name,string phn,string city,int a){
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
    per per1(name,phn,city,1);
    per per2(name,phn,city,2);
    per per3(name,phn,city,3);
    cin>>per1.name>>per1.phn>>per1.city;
    cin>>per2.name>>per2.phn>>per2.city;
    cin>>per3.name>>per3.phn>>per3.city;
    if(per1.a==num){
        cout<<"name "<<per1.name<<"\n";
        cout<<"addr "<<per1.phn<<"\n";
        cout<<"city "<<per1.city<<"\n";
    }
    if(per2.a==num){
        cout<<"name "<<per2.name<<"\n";
        cout<<"addr "<<per2.phn<<"\n";
        cout<<"city "<<per2.city<<"\n";
    }
    if(per3.a==num){
        cout<<"name "<<per3.name<<"\n";
        cout<<"addr "<<per3.phn<<"\n";
        cout<<"city "<<per3.city<<"\n";
    }
    return 0;
}