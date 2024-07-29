#include <iostream>
using namespace std;

class stack{
    public:
    int n;
    int *arr;

    stack(int a){
        this->arr = new int[a];
        this->n = 0;
    }
    void push(int a){
        arr[n] = a;
        n++;
    }
    void pop(){
        n--;
    }
    void size(){
        cout << n << '\n';
    }
    void get(int a){
        cout << arr[a-1] << '\n';
    }
};

int main() {
    int N;
    cin >> N;
    stack a(100000);
    for(int i=0;i<N;i++){
        string s;
        cin >> s;
        if(s=="push_back"){
            int n;
            cin >> n;
            a.push(n);
        }
        if(s=="pop_back"){
            a.pop();
        }
        if(s=="size"){
            a.size();
        }
        if(s=="get"){
            int n;
            cin >> n;
            a.get(n);
        }
    }
    return 0;
}