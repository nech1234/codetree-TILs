#include <iostream>
#include <string>

using namespace std;

string secret_code;
char meeting_point;
int timea;

class place {
private:
    string secret_code;
    char meeting_point;
    int timea;
public:
    place(string secret_code, char meeting_point, int timea) {
        this->secret_code = secret_code;
        this->meeting_point = meeting_point;
        this->timea = timea;
    }

    void print() {
        cout << "secret code : " << this->secret_code << "\n";
        cout << "meeting point : " << this->meeting_point << "\n";
        cout << "time : " << this->timea << "\n";
    }
};

int main() {
    cin >> secret_code >> meeting_point >> timea;

    place*a = new place(secret_code,meeting_point,timea);
    a->print();

    return 0;
}