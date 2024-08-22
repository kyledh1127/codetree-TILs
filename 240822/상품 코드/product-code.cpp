#include <iostream>
using namespace std;
class str{
public:
    string name;
    int num;
    str(string name,int num){
        this->name=name;
        this->num=num;
    }
};
int main() {
    string name;
    int num;
    str str1("codetree",50);
    str str2(name,num);
    cin>>str2.name>>str2.num;
    cout<<"product "<<str1.num<<" is "<<str1.name<<"\n";
    cout<<"product "<<str2.num<<" is "<<str2.name<<"\n";

    return 0;
}