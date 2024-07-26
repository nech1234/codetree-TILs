#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    int count = 0;
    for(int i=0;i<s.size();i++){
        if(s[i] == ')'){
            continue;
        }
        else{
            for(int j=i+1;j<s.size();j++){
                if(s[j] == '('){
                    continue;
                }
                else{
                    count++;
                }
            }
        }
    }
    cout << count;
    return 0;
}