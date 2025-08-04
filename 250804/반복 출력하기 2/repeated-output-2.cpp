#include <iostream>

using namespace std;

int N;
void print(int N){
    if(N<=0){
        return;
    }
    cout << "HelloWorld" << "\n";
    print(N-1);
}
int main() {
    cin >> N;
    print(N);
    return 0;
}