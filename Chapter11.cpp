#include <iostream>
#include <string>
using namespace std;

class Product {
private:
    int id;
    string name;
    float price;

public:
    // Constructor
    Product(int i, string n, float p) : id(i), name(n), price(p) {
        cout << "Constructor called: Product created\n";
    }

    // Destructor
    ~Product() {
        cout << "Destructor called: Product destroyed\n";
    }

    void printDetails() {
        cout << "ID: " << id 
             << ", Name: " << name 
             << ", Price: $" << price 
             << endl;
    }
};

int main() {
    Product p(123, "Gaming Mouse", 149.99);
    p.printDetails();

    return 0;
}
