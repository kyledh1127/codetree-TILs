#include <iostream>
using namespace std;
class bomb{
public:
    string code;
    char color;
    int second;
    bomb(string code,char color,int second){
        this->code=code;
        this->color=color;
        this->second=second;
    }
};
int main() {
    string code;
    char color;
    int second;
    bomb bomb1(code,color,second);
    cin>>bomb1.code>>bomb1.color>>bomb1.second;
    cout<<"code : "<<bomb1.code<<"\n";
    cout<<"color : "<<bomb1.color<<"\n";
    cout<<"second : "<<bomb1.second<<"\n";
    return 0;
}