#include <iostream>
#include <string>

using namespace std;

class Person {
    string name;
public:
    Person() { name = ""; }

    Person(string name) { this->name = name; }

    void setName(string name) { this->name = name; }

    string getName() { return name; }
};

class Family {
    Person *p;
    int size;
    string FamilyName;
public:
    Family(string name, int size);

    void show();

    void setName(int size, string name);

    ~Family();
};

Family::Family(string name, int size) {
    this->size = size;
    FamilyName = name;
    p = new Person[size];
}

void Family::setName(int size, string name) {
    p[size].setName(name);
}

void Family::show() {
    cout << FamilyName << "가족을 다음과 같이 " << size << "명 입니다." << endl;
    cout << p[0].getName() << "   " << p[1].getName() << "  " << p[2].getName() << endl;
}

Family::~Family() {
    delete[] p;
}

int main() {
    Family *simpson = new Family("simpson", 3); // 3명으로 구성된 가족
    simpson->setName(0, "Mr.Simpson");
    simpson->setName(1, "Mrs.Simpson");
    simpson->setName(2, "Bart Simpson");
    simpson->show();
    delete simpson;
}