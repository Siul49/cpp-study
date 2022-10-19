#include <iostream>
#include <string>
using namespace std;

class Integer{
public:
    int n = 0;
    int get(){
        return n;
    }
    int set(int n){
        this->n = n;
    }

    int isEven(){
        if (n % 2 == 0) return 1;
        else return 0;
    }

    Integer(int n){
        this->n = n;
    }
    Integer(string num){
        int N = stoi(num);
        n = N;
    }
};
int main(){
    Integer n(30);
    cout << n.get() <<' '; // 30 출력
    n.set(50);
    cout << n.get() << ' '; // 50 출력

    Integer m("300");
    cout << m.get() << ' '; // 300 출력
    cout << m.isEven(); //true(정수로 1) 출력

    return 0;
}