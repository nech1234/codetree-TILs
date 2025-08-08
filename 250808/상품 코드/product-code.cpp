#include <iostream>
#include <string>

using namespace std;

string product_name;
int product_code;

class Product{
private:
    string product_name;
    int product_code;
public:
    Product(string product_name, int product_code){
        this->product_name = product_name;
        this->product_code = product_code;
    }
    void print(){
        cout << "product " << this->product_code << " is " << this->product_name << "\n";
    }
};

int main() {
    cin >> product_name >> product_code;

    Product("codetree",50).print();
    Product(product_name,product_code).print();

    return 0;
}