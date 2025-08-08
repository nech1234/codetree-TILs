#include <iostream>
#include<algorithm>
using namespace std;

int n;
string name[10];
int score1[10];
int score2[10];
int score3[10];

class Person{
public:
    string name;
    int score1;
    int score2;
    int score3;
    Person(){}

    Person(string name, int score1, int score2, int score3){
        this->score1 = score1;
        this->score2 = score2;
        this->score3 = score3;
        this->name = name;
    }
};

bool comp(Person a, Person b){
    return a.score1 + a.score2 + a.score3 < b.score1 + b.score2 + b.score3;
}

int main() {
    cin >> n;
    Person people[n];
    for (int i = 0; i < n; i++) {
        cin >> name[i];
        cin >> score1[i];
        cin >> score2[i];
        cin >> score3[i];
        people[i] = Person(name[i],score1[i],score2[i],score3[i]);
    }
    sort(people, people+n,comp);

    for(int i=0;i<n;i++){
        cout << people[i].name << " " << people[i].score1 << " " << people[i].score2 << " " << people[i].score3 << "\n";
    }
    // Please write your code here.

    return 0;
}