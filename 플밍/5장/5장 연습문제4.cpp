#include <iostream>

using namespace std;

class MyIntStack {
    int *p; // 스택 메모리로 사용할 포인터
    int size; // 스택의 최대 크기
    int tos; // 스택의 탑을 가리키는 인덱스
public:
    MyIntStack();

    MyIntStack(int size);

    MyIntStack(const MyIntStack &s);

    ~MyIntStack();

    bool push(int n); // 정수 n을 스택에 푸시한다.
    // 스택이 꽉 차있으면 false를, 아니면 true 리턴
    bool pop(int &n); // 스택의 탑에 있는 값을 n에 팝한다.
    // 만일 스택이 비어 있으면 false를, 아니면 true 리턴
};

MyIntStack::MyIntStack() {
    size = 10;
    tos = 0;
    p = new int[size];
}

MyIntStack::MyIntStack(int size) {
    this->size = size;
    tos = 0;
    p = new int[size];
}

MyIntStack::MyIntStack(const MyIntStack &s) {
    this->size = s.size;
    this->size = s.tos;
    p = new int[size];
    for (int i = 0; i < size; i++) {
        p[i] = s.p[i];
    }
}

MyIntStack::~MyIntStack() {
    if (p) {
        delete p;
    }
}

bool MyIntStack::push(int n) {
    if (tos == size) {
        return false;
    }
    p[tos] = n;
    tos++;
    return true;    // 스택이 꽉 차있음
}

bool MyIntStack::pop(int &n) {
    if (tos == 0) {
        return false; // 스택이 비어있음
    }
    tos--;
    n = p[tos];
    return true;
}

int main() {
    MyIntStack a(10);
    a.push(10);
    a.push(20);
    MyIntStack b = a;
    b.push(30);

    int n;
    a.pop(n);
    cout << "스택 a에서 팝한 값" << n << endl;
    b.pop(n);
    cout << "스택 b에서 팝한 값" << n << endl;
}