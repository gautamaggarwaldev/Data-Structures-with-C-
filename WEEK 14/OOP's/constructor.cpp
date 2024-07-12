# include <iostream>
using namespace std;
class Student {
public:
    float gpa;
    int rno;
    string name;
    Student() { //default constructor

    }
    Student(string x, int y, float z) {
        gpa = z;
        rno = y;
        name = x;
    }
    Student(int y, float z, string x) {
        gpa = z;
        rno = y;
        name = x;
    }
    Student(int x, string y) {
        rno = x;
        name = y;
    }
};
int main() {
    

    Student s1 = {"koli",80,9.2};
    s1.name = "jjuvn";
    Student s2 = Student("holu", 90, 9.50);
    Student s3;
    s3.gpa = 9.2;
    s3.name = "vds";
    s3.rno = 96;
    Student s4 = Student(88,5.2,"poj");
    Student s4 = Student(88,"poj");
}