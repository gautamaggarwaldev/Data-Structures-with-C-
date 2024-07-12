# include <iostream>
using namespace std;
class Student {
    public:
        float gpa;
        string name;
        int rno;
    };

void print(Student s) {
    cout << s.rno << "," << s.name << "," << s.gpa << endl;
}
int main() {
    class Car{
    public:
        string name;
        int price;
        int gc;
        string type;
        int seats;
    };

    Student s1; //declaration
    s1.rno = 65;
    s1.gpa = 9.5;
    s1.name = "gautam";
    print(s1);
    
    Student s2 = {8.0,"vijay",93};
    print(s2);
}