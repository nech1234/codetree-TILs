#include <iostream>
#include <string>
#include<algorithm>

using namespace std;

int n;
string name[10];
int korean[10];
int english[10];
int math[10];

class Person{
public:
    string name;
    int korean;
    int english;
    int math;
    Person(){}

    Person(string name, int korean, int english, int math){
        this->name = name;
        this->korean = korean;
        this->english = english;
        this->math = math;
    }
};

bool comp(Person a, Person b){
    if(a.korean == b.korean){
        if(a.english == b.english){
            return a.math>b.math;
        }
        return a.english>b.english;
    }
    return a.korean>b.korean;
}

int main() {
    cin >> n;
    Person people[n];
    for (int i = 0; i < n; i++) {
        cin >> name[i];
        cin >> korean[i];
        cin >> english[i];
        cin >> math[i];
        people[i] = Person(name[i],korean[i],english[i],math[i]);
    }

    sort(people, people+n,comp);

    for(int i=0;i<n;i++){
        cout << people[i].name << " " << people[i].korean << " " << people[i].english << " " << people[i].math << "\n";
    }

    // Please write your code here.

    return 0;
}