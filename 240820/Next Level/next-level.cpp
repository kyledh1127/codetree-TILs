#include <iostream>
using namespace std;
class id{
    public:
    string id="codetree";
    int lev=10;
    void push(string a,int b){
        cout<<"user "<<id<<" lv "<<lev<<"\n";
        this->id=a;
        this->lev=b;
        cout<<"user "<<id<<" lv "<<lev<<"\n";
    }
};
int main() {
    string a;
    int b;
    cin>>a>>b;
    id asd;
    asd.push(a,b);
    return 0;
}