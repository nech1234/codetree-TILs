#include <iostream>
using namespace std;

bool inrange(int x, int y, int n1){
    return(1<=x&&x<=n1&&1<=y&&y<=n1);
}

int main() {
    int n,t,x,y;
    char dir;
    int dx,dy;
    cin >> n >> t >> x >> y >> dir;
    if(dir == 'U'){
        dy=0;
        dx=-1;
    }
    if(dir == 'D'){
        dy=0;
        dx=1;
    }
    if(dir == 'R'){
        dy=1;
        dx=0;
    }
    if(dir == 'L'){
        dy=-1;
        dx=0;
    }
    for(int i=0;i<t;i++){
        int nx = x+dx;
        int ny = y+dy;
        if(inrange(nx,ny,n)){
            x=nx;
            y=ny;
        }
        else{
            dx=-dx;
            dy=-dy;
        }
    }
    cout << x << ' ' << y;
    return 0;
}