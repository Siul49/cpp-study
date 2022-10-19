#include <iostream>
using namespace std;

class Ram {
    char mem[100*1024]; // 100KB 메모리. 한 번지는 한 바이트이므로 char 타입 사용
    int size;
public:
    Ram(); // mem 배열을 0으로 초기화하고 size를 100*1024로 초기화
    ~Ram(); // "메모리 제거됨" 문자열 출력
    char read(int address); // address 주소의 메모리 바이트 리턴
    void write(int address, char value); // address 주소에 한 바이트로 value 저장
};

Ram::Ram(){
    mem[100 * 1024] = {0,};
    size = 100 * 1024;
}

Ram::~Ram() {
    cout << "메모리 제거됨" << endl;
}

char Ram::read(int address){
    return mem[address];
}

void Ram::write(int address, char value){
    mem[address] = value;
}
int main(){
    Ram ram;
    ram.write(100, 20);
    ram.write(101, 30);
    char res = ram.read(100) + ram.read(101);
    ram.write(102, res);
    cout << "102 번지의 값 = " << (int)ram.read(102) << endl;
}