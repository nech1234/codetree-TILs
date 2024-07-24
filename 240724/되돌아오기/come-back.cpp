#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int dx[4] = {1,-1,0,0};
    int dy[4] = {0,0,1,-1};
    int dir_num = 0;
    int x = 0;
    int y = 0;
    int count = 0;
    for(int i=0;i<N;i++){
        char c;
        int n;
        cin >> c >> n;
        if(c == 'E'){
            dir_num = 0;
        }
        if(c == 'W'){
            dir_num = 1;
        }
        if(c == 'N'){
            dir_num = 2;
        }
        if(c == 'S'){
            dir_num = 3;
        }
        for(int j=0;j<n;j++){
            x+=dx[dir_num];
            y+=dy[dir_num];
            count++;
            if(x == 0 && y == 0){
                cout << count;
                return 0;
            }
        }
    }
    cout << -1;
    return 0;
}