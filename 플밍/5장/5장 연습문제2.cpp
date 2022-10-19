#include <iostream>

using namespace std;


bool bigger(int a, int b, int &big) {
    if (a == b) {
        return true;
    } else {
        if (a > b) {
            big = a;
        } else {
            big = b;
        }
        return false;
    }

}

int main() {
    int big;
    int a, b;

    cin >> a >> b;

    bigger(a, b, big);

    cout << b;
}