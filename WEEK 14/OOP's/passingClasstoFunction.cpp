#include <iostream>
using namespace std;
class Car
{
public:
    int price;
    string name;
};

void change(Car* x) {
    // (*x).name = "amze";
    // (*x).price = 800000;
    x->name = "scorpio";
    x->price = 500000;  
    // a->b maens (*a).b
}
int main() {
    // Car c1 = {1200000, "kia"};
    // Car c2 = {800000, "amaze"};
    Car c1;
    Car* ptr = &c1;
    ptr->name = "kia";
    ptr->price = 9630000;
    cout << c1.name << c1.price << endl;
    change(&c1);
    cout << c1.name << c1.price << endl;
}