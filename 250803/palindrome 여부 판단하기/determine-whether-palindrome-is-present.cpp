#include <iostream>
#include <string>

using namespace std;

string A;

int main() {
    cin >> A;
    string s;
    for(int i= A.size()-1;i>=0;i--){
        s+=A[i];
    }
    if(s != A){
        cout << "No";
    }
    else{
        cout << "Yes";
    }

    return 0;
}