#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    int dx[4] = {-1,0,1,0};
    int dy[4] = {0,1,0,-1};
    int count = 0;
    int x = 0;
    int y = 0;
    int dir_num = 1;
    for(int i=0;i<s.size();i++){
        count++;
        if(s[i] == 'L'){
            dir_num -=1;
            if(dir_num<0){
                dir_num = 3;
            }
        }
        if(s[i] == 'R'){
            dir_num += 1;
            if(dir_num>3){
                dir_num = 0;
            }
        }
        if(s[i] == 'F'){
            x+=dx[dir_num];
            y+=dy[dir_num];
            if(x==0&&y==0){
                cout <<count;
                return 0;
            }
        }
    }
    cout << -1;
    return 0;
}