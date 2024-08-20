#include <iostream>
using namespace std;
class score{
public:
    char grade;
    int sco;
    score(char a='p',int b=0){
        this->grade=a;
        this->sco=b;
    }
};
int main() {
    score scores[5];
    for(int i = 0; i < 5; i++) {
    char grade;
    int sco;
    cin >> grade>>sco;
    scores[i]=score(grade,sco);
    }
    int min=100;
    for(int i=0;i<5;i++){
        if(scores[i].sco<min){
            min=scores[i].sco;
            cout<<scores[i].grade<<" "<<scores[i].sco;
                        break;
        }
    }
    
    return 0;
}