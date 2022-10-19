#include <iostream>
#include <string>

using namespace std;


int main() {
    string line;
    srand((unsigned int) time(nullptr));
    cout << "아래에 한 줄을 입력하세요.(exit를 입력하면 종료합니다)" << endl;
    while (1) {
        cout << ">>";
        getline(cin, line);

        if (line == "exit") {
            break;
        }

        int n = rand() % line.length();
        line[n] = rand() % 127;

        cout << line << endl;
    }
}