#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Random {
public:
	Random() {

	}

	int next() {
		int n = rand();
		return n;
	}

	int nextInRange(int a, int b) {
		int range = b - a + 1;
		return (rand() % range) + a;
	}
};

int main()
{
    // srand(time(NULL));
	Random r;
	cout << "-- 0에서 " << RAND_MAX << "까지의 랜덤 정수 10 개 --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next();
		cout << n << ' ';
	}

	cout << endl << endl << "-- 2에서 " << "4 까지의 랜덤 정수 10 개 -- " << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 4);
		cout << n << ' ';
	}
	cout << endl;
}