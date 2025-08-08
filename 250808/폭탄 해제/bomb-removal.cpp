#include <iostream>
#include <string>

using namespace std;

string unlock_code;
char wire_color;
int seconds;

class Boom{
private:
    string unlock_code;
    char wire_color;
    int seconds;
public:
    Boom(string unlock_code, char wire_color, int seconds){
        this->unlock_code = unlock_code;
        this-> wire_color = wire_color;
        this->seconds = seconds;
    }
    void print(){
        cout << "code : " << this->unlock_code << "\n";
        cout << "color : " << this->wire_color << "\n";
        cout << "second : " << this->seconds << "\n";
    }
};

int main() {
    cin >> unlock_code >> wire_color >> seconds;

    Boom(unlock_code,wire_color,seconds).print();

    return 0;
}