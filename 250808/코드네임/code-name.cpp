#include <iostream>

#define MAX_N 5

using namespace std;

char codename[MAX_N];
int score[MAX_N];

class Spy{
private:
    char codename;
    int score;
public:
    Spy(){
        
    }
    Spy(char codename, int score){
        this->codename = codename;
        this->score = score;
    }
    char getName(){
        return this->codename;
    }
    int getScore(){
        return this->score;
    }
};

Spy minScore(Spy members[]){
    Spy minMember = members[0];
    for(int i=1;i<MAX_N;i++){
        if(minMember.getScore() > members[i].getScore()){
            minMember = members[i];
        }
    }
    return minMember;
}
int main() {
    Spy members[MAX_N];
    for (int i = 0; i < MAX_N; i++) {
        cin >> codename[i] >> score[i];
        members[i] = Spy(codename[i],score[i]);
    }

    Spy minMember = minScore(members);
    cout << minMember.getName() << " " << minMember.getScore();

    return 0;
}
