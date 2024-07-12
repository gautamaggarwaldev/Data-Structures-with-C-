#include <iostream>
using namespace std;
// class SuperCar {
//     int nitro;
//     int airbags;
//     Car c;
// };
class Car
{
public:
    int price;
    string name;
    void print(){
        cout << name << price  << " "<< seats << endl;
    }

    Car()
    {

    }
    Car(int price, string name)
    {
        (*this).price = price;
        this->name = name;
    }
    Car(int price, string name, int seats) {
        this->name = name;
        this->price = price;
        this->seats = seats;
    }
    void setSeats(int seats) {
        this->seats = seats;
    }
    int getSeats(){
        return seats;
    }
private :
    int seats;
};

int main()
{
    Car c1 = {1200000, "kia"};
    cout << c1.name << c1.price << endl;
    Car c2 = {800000, "amze", 5};
    c2.setSeats(5);
    cout <<c2.getSeats();
   
    // c2.seats = 4; error
}