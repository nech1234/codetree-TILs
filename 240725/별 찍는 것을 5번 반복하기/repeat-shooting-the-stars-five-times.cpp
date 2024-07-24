#include <iostream>
using namespace std;

void printStar(){
    for(int i=0;i<5;i++){
        for(int j=0;j<10;j++){
            cout << '*';
        }
        cout << '\n';
    }
}

int main() {
    printStar();
    return 0;
}