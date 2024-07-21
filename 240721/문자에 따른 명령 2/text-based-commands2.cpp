#include <iostream>
using namespace std;

int main() {
    int x{0},y{0};
    int dx[4] = {-1,1,1,-1};
    int idx = 1;
    string s;
    cin >> s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='L'){
            idx = idx-1;
            if(idx==-1){
                idx=3;
            }
        }
        if(s[i]=='R'){
            idx = idx+1;
            if(idx==4){
                idx=0;
            }
        }
        if(s[i]=='F'){
            if(idx%2==0){
                x+=dx[idx];
            }
            else{
                y+=dx[idx];
            }
        }
    }
    cout << x << ' ' << y;
    return 0;
}