#include <iostream>
#include <string>

using namespace std;

string A;

int main() {
    cin >> A;
    for(int i=0;i<A.size();i++){
        int cnt = 0;
        for(int j=1;j<A.size();j++){
            if(A[i]!=A[j]){
                cnt++;
                if(cnt == 2){
                    cout << "Yes";
                    return 0;
                }
            }
        }
    }
    cout << "No";

    return 0;
}