#include <iostream>

#define MAX_N 10

using namespace std;

int n;
string name[MAX_N], street_address[MAX_N], region[MAX_N];

class Person{
private:
    string name;
    string street_address;
    string region;
public:
    Person(){}
    Person(string name,string street_address, string region){
        this->name = name;
        this->street_address = street_address;
        this->region = region;
    }
    string getName(){
        return this->name;
    }
    string getStreet_address(){
        return this->street_address;
    }
    string getRegion(){
        return this->region;
    }
};

Person findMin(Person people[]){
    Person minPerson = people[0];
    for(int i=1;i<n;i++){
        if(minPerson.getName()<people[i].getName()){
            minPerson = people[i];
        }
    }
    return minPerson;
}

int main() {
    cin >> n;
    Person people[MAX_N];
    for (int i = 0; i < n; i++) {
        cin >> name[i];
        cin >> street_address[i];
        cin >> region[i];
        people[i] = Person(name[i],street_address[i],region[i]);
    }
    Person minPerson = findMin(people);
    cout << "name " << minPerson.getName() << "\n";
    cout << "addr " << minPerson.getStreet_address() << "\n";
    cout << "city " << minPerson.getRegion() << "\n";
    

    // Please write your code here.

    return 0;
}