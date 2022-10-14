#include <iostream>
using namespace std;

void swap(int* a, int* b) {
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

void swap2(int a, int b) {
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
}

int main() {

	//주소에 의한 호출
	int m = 2, n = 9;
	swap(&m, &n);
	cout << m << " " << n << endl;

	//값에 의한 호출
	int a = 2, b = 9;
	swap2(a, b);
	cout << a << ' ' << b << endl;

}