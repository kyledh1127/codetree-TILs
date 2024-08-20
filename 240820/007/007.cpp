#include <iostream>
#include <string>
using namespace std;
class search{
public:
    string code;
    char point;
    int time;
    void kkk(string a, char b,int c){
        this->code=a;
        this->point=b;
        this->time=c;
        cout<<"secret code : "<<code<<"\n";
        cout<<"meeting point : "<<point<<"\n";
        cout<<"time : "<<time<<"\n";
    }
};
int main() {
    string a;
    char b;
    int c;
    cin>>a>>b>>c;
    search search;
    search.kkk(a,b,c);
    // 여기에 코드를 작성해주세요.
    return 0;
}