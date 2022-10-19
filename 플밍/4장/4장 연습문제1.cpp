#include <iostream>

using namespace std;

int main() {
    int *integer = new int;

    cout << "정수 5개 입력>>";

    for (int i = 0; i < 5; i++) {
        cin >> integer[i];
    }

    float ave = 0, sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += integer[i];
    }
    ave = sum / 5;
    cout << "평균 " << ave << endl;
}