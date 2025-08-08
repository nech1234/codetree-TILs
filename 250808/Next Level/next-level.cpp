#include <iostream>
#include <string>

using namespace std;

string user2_id;
int user2_level;

class User{
private:
    string user2_id;
    int user2_level;
public:
    User(string user2_id,int user2_level){
        this->user2_id = user2_id;
        this->user2_level = user2_level;
    }

    void print(){
        cout << "user " << this->user2_id << " lv " << this->user2_level << "\n";
    }

};

int main() {
    cin >> user2_id >> user2_level;

    User user1 = User("codetree",10);
    User user2 = User(user2_id,user2_level);
    user1.print();
    user2.print();

    return 0;
}