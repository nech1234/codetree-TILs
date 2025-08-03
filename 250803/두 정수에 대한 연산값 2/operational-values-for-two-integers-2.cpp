#include <iostream>

using namespace std;

int a, b;

void mul(int &a,int &b){
    if(a<b){
        a +=10;
        b *=2;
    }
    else{
        b +=10;
        a *=2;
    }
}
int main() {
    cin >> a >> b;
    mul(a,b);
    cout << a << ' ' << b;

    return 0;
}