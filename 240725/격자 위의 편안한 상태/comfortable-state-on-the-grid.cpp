#include <iostream>
using namespace std;

class area{
    public:
    bool state;

    area(){
        state = false;
    }
};

bool inarea(int x, int y, int n){
    return(0<=x && x<n && 0<=y && y<n);
}

int main() {
    int n,m;
    cin >> n >> m;
    area arr[n][n];

    for(int i=0;i<m;i++){
        int x, y;
        cin >> x >> y;
        int count = 0;
        arr[x-1][y-1].state = true;
        if(inarea(x-2,y-1,n)&&arr[x-2][y-1].state == true){
            count++;
        }
        if(inarea(x,y-1,n)&&arr[x][y-1].state == true){
            count++;
        }
        if(inarea(x-1,y-2,n)&&arr[x-1][y-2].state == true){
            count++;
        }
        if(inarea(x-1,y,n)&&arr[x-1][y].state == true){
            count++;
        }
        if(count == 3){
            cout << 1 << '\n';
        }
        else{
            cout << 0 << '\n';
        }
    }
    return 0;
}