#include <iostream>

using namespace std;

class Player {

public:
    string member;

    string getMember() {
        return member;
    }
};

class GamblingGame {
    Player *p;
public:
    void start() { cout << "***** 겜블링 게임을 시작합니다. *****" << endl; }

    void members() {
        cout << "첫번째 선수 이름>>";
        cin >> p[0].member;
        cout << "두번째 선수 이름>>";
        cin >> p[1].member;
    }

    void playing() {
        int i = 0;
        int a, b, c;
        int count = 0;

        int n = getchar();
        while (1) {
            a = rand() % 3;
            b = rand() % 3;
            c = rand() % 3;
            cout << p[i].getMember() << ":<Enter>";

            n = getchar();
            cout << a << "       " << b << "      " << c << "       ";

            if (a == b && b == c) {
                cout << p[i].getMember() << "님 승리!" << endl;
                break;
            } else {
                cout << "아쉽군요!" << endl;
            }


            if (i == 1) {
                i = 0;
            } else if (i == 0) {
                i = 1;
            }
            count++;
        }
    }


    GamblingGame() {
        p = new Player[2];
    }
};

int main() {
    srand((unsigned int) time(nullptr));
    GamblingGame gamblingGame;
    gamblingGame.start();
    gamblingGame.members();
    gamblingGame.playing();

}