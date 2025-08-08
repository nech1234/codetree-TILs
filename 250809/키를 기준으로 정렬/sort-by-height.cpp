#include <iostream>
#include<algorithm>
using namespace std;

int n;
string name[10];
int height[10];
int weight[10];

class Person{
    public:
    string name;
    int height;
    int weight;

    Person(){}
    Person(string name, int height, int weight){
        this->name = name;
        this->height = height;
        this->weight = weight;
    }
};

bool comp(Person a, Person b){
    return a.height<b.height;
}

int main() {
    cin >> n;
    Person people[n];
    for (int i = 0; i < n; i++) {
        cin >> name[i];
        cin >> height[i];
        cin >> weight[i];
        people[i] = Person(name[i],height[i],weight[i]);
    }
    sort(people,people+n,comp);
    for (int i = 0; i < n; i++) {
        cout << people[i].name << " "<<people[i].height << " "<<people[i].weight << "\n";
    }
    // Please write your code here.

    return 0;
}